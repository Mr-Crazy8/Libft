/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:41:35 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/31 14:01:10 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

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


size_t allocation_count = 0;   // Tracks the number of malloc calls
size_t fail_after = 15;         // Set this to the number of successful allocations before failure

void *custom_malloc(size_t size) {
    if (allocation_count >= fail_after) {
        return NULL;  // Simulate allocation failure
    }
    allocation_count++;
    return malloc(size);
}


#define malloc(size) custom_malloc(size)



char **ft_split(char const *s, char c)
{
    if (s == NULL)
        return NULL;

    // Step 1: Count the number of words
    size_t i = 0, n = 0;
    while (s[i])
    {
        if ((s[i] != c && (i == 0 || s[i - 1] == c)))
            n++; 
        i++;
    }

    // Step 2: Allocate memory for the split array
    char **split = (char **)malloc((n + 1) * sizeof(char *));
    if (split == NULL)
        return NULL;

    // Step 3: Split the string
    i = 0;
    size_t j = 0;
    while (s[i] && j < n)
    {
        // Skip delimiters
        while (s[i] == c)
            i++;
        // Determine the start and length of the word
        size_t start = i;
        while (s[i] != c && s[i] != '\0')
            i++;
        size_t len = i - start;

        // Allocate and copy the word
        split[j] = (char *)malloc((len + 1) * sizeof(char));
        if (!split[j])
        {
            // Free previously allocated memory if allocation fails
            size_t k = 0;
            while (k < j)
            {
                free(split[k]);
                k++;
            }
            free(split);
            return NULL;
        }
        ft_strlcpy(split[j], &s[start], len + 1);
        j++;
    }

    // Null-terminate the array of strings
    split[j] = NULL;
    return split;
}

void print_split(char **result) {
    if (result == NULL) {
        printf("NULL\n");
        return;
    }
    for (int i = 0; result[i] != NULL; i++) {
        printf("\"%s\"", result[i]);
        if (result[i + 1] != NULL)
            printf(", ");
    }
    printf("\n");
}

///int main() {
 //   char **result;

    // Test Case 1: Null Input String
//     printf("Test 1: Null Input String\n");
//     result = ft_split(NULL, ' ');
//     print_split(result);

//     // Test Case 2: Empty String
//     printf("Test 2: Empty String\n");
//     result = ft_split("", ' ');
//     print_split(result);

//     // Test Case 3: Delimiter Not Present in String
//     printf("Test 3: Delimiter Not Present in String\n");
//     result = ft_split("hello", ' ');
//     print_split(result);

//     // Test Case 4: String with Only Delimiters
//     printf("Test 4: String with Only Delimiters\n");
//     result = ft_split("     ", ' ');
//     print_split(result);

//     // Test Case 5: String Starts with Delimiters
//     printf("Test 5: String Starts with Delimiters\n");
//     result = ft_split("  hello world", ' ');
//     print_split(result);

//     // Test Case 6: String Ends with Delimiters
//     printf("Test 6: String Ends with Delimiters\n");
//     result = ft_split("hello world  ", ' ');
//     print_split(result);

//     // Test Case 7: Multiple Consecutive Delimiters
//     printf("Test 7: Multiple Consecutive Delimiters\n");
//     result = ft_split("hello   world", ' ');
//     print_split(result);

//     // Test Case 8: All Words Are Delimited by the Character
//     printf("Test 8: All Words Are Delimited by the Character\n");
//     result = ft_split("a,b,c", ',');
//     print_split(result);

//     // Test Case 9: String with Only One Character
//     printf("Test 9: String with Only One Character\n");
//     result = ft_split("a", ' ');
//     print_split(result);

//     // Test Case 10: String Where Delimiters and Words Alternate
//     printf("Test 10: String Where Delimiters and Words Alternate\n");
//     result = ft_split("a b c", ' ');
//     print_split(result);

//     // Test Case 11: Long String Without Delimiters
//     printf("Test 11: Long String Without Delimiters\n");
//     result = ft_split("thisisaverylongwordwithoutanydelimiters", ' ');
//     print_split(result);

//     // Test Case 12: Repeated Delimiter at the End of a Word
//     printf("Test 12: Repeated Delimiter at the End of a Word\n");
//     result = ft_split("apple,,,banana", ',');
//     print_split(result);

//     // Test Case 13: String with Null Character Inside
//     printf("Test 13: String with Null Character Inside\n");
//     result = ft_split("hello\0world", ' ');
//     print_split(result);

//     // Test Case 14: Memory Allocation Failure Simulation
//     // Note: Simulating malloc failure directly in this test is difficult in normal code.
//     // This test is more for conceptual understanding; using a debugger or modified malloc can simulate failures.

//     // Test Case 15: String with Escaped or Special Characters
//     printf("Test 15: String with Escaped or Special Characters\n");
//     result = ft_split("word1\nword2\tword3", '\n');
//     print_split(result);

//     // Free memory for each test case
//     // Assuming that ft_split correctly allocates memory, we need to free the allocated memory.
//      for (int i = 0; i < 15; i++) {
//         if (result) {
//             for (int j = 0; result[j] != NULL; j++)
//                 free(result[j]);
//              free(result);
//         }
//       return 0;
//     }
// }


int main() {
    char **result;

   // Test Case 14: Memory Allocation Failure Simulation
   printf("Test 14: Memory Allocation Failure Simulation\n");
    
   // Adjust `fail_after` to test at different points of failure.
  fail_after = 3;  // For example, simulate failure after the 3rd allocation
    allocation_count = 0; // Reset the counter

    result = ft_split("This is a test string", ' ');
    print_split(result);

    // Free the allocated memory (if any)
    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    }
    check_for_leaks();
    // Reset the macro definition of malloc back to standard for the rest of the program
    #undef malloc

    return 0;
//}