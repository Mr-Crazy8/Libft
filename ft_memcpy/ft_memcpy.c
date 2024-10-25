/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:32:09 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/24 09:32:14 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	size_t i = 0;
	while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	
	return dest;
}


int main() {
    // Test 1: Copying a string
    char src1[] = "Hello, World!";
    char dest1[20];
    
    ft_memcpy(dest1, src1, strlen(src1) + 1);  // Copy with null terminator
    printf("Test 1 - String copy:\nSource: %s\nDestination: %s\n\n", src1, dest1);
    
    // Test 2: Copying an array of integers
    int src2[] = {1, 2, 3, 4, 5};
    int dest2[5];
    
    ft_memcpy(dest2, src2, sizeof(src2));  // Copy 5 integers
    printf("Test 2 - Integer array copy:\nSource: ");
    for (int i = 0; i < 5; i++) printf("%d ", src2[i]);
    printf("\nDestination: ");
    for (int i = 0; i < 5; i++) printf("%d ", dest2[i]);
    printf("\n\n");

    // Test 3: Partial copy (copy first 5 characters)
    char src3[] = "OpenAI GPT-3";
    char dest3[20] = {0};  // Initialize with zeros
    
    ft_memcpy(dest3, src3, 5);  // Copy only first 5 bytes
    printf("Test 3 - Partial copy (first 5 bytes):\nSource: %s\nDestination: %s\n\n", src3, dest3);

    // Test 4: Overlapping memory regions (NOTE: This is undefined behavior for memcpy)
    // Normally you'd use memmove for overlap, but this is for demonstration purposes.
    char overlap[] = "ABCDEFG";
    printf("Before overlap memcpy: %s\n", overlap);
    ft_memcpy(overlap + 2, overlap, 5);  // Overlapping regions, undefined behavior
    printf("After overlap memcpy (undefined behavior): %s\n\n", overlap);
    
    return 0;
}
