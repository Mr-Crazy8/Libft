#include <stdio.h>
#include <stdlib.h>

// Structure for tracking each memory allocation
typedef struct MemNode {
    void *ptr;
    size_t size;
    struct MemNode *next;
} MemNode;

MemNode *head = NULL; // Head of the linked list for tracking allocations

// Replacement for malloc that tracks allocations
void* track_malloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) return NULL;

    // Create a new node to track this allocation
    MemNode *node = malloc(sizeof(MemNode));
    if (!node) {
        free(ptr); // Free allocated memory if node creation fails
        return NULL;
    }
    node->ptr = ptr;
    node->size = size;
    node->next = head;
    head = node;

    return ptr;
}

// Replacement for free that removes tracking for the allocation
void track_free(void *ptr) {
    MemNode **current = &head;
    while (*current) {
        if ((*current)->ptr == ptr) {
            MemNode *temp = *current;
            *current = (*current)->next;
            free(temp); // Free the tracking node
            break;
        }
        current = &(*current)->next;
    }
    free(ptr);
}

// Check for memory leaks at the end of the program
void check_for_leaks() {
    MemNode *current = head;
    if (current) {
        printf("Memory leaks detected:\n");
        while (current) {
            printf("Leaked memory at address %p, size: %zu bytes\n", current->ptr, current->size);
            MemNode *temp = current;
            current = current->next;
            free(temp); // Free tracking nodes
        }
    } else {
        printf("No memory leaks detected.\n");
    }
}

// Redefine malloc and free to use the tracking versions
#define malloc(size) track_malloc(size)
#define free(ptr) track_free(ptr)