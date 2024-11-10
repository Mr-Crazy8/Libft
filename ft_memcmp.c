/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:11:56 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:16:06 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

//int ft_memcmp(const void *s1, const void *s2, size_t n)
//{
//	const unsigned char *p1 = (const unsigned char *)s1;
//	const unsigned char *p2 = (const unsigned char *)s2;
//
//	size_t i = 0;
//
//	while (i < n)
//	{
//		if (p1[i] < p2[i])
//		{
//			return -1;
//		}
//		else if (p1[i] > p2[i])
//		{
//			return 1;
//		}
//		i++;
//	}
//	return 0;
//}


#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    size_t i = 0;

    while (i < n)
    {
        if (p1[i] != p2[i])
        {
            return p1[i] - p2[i];  // Return the difference in ASCII values
        }
        i++;
    }
    return 0;
}

// int main() {
//     int result;

//     // Test 1: Basic comparison
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     result = memcmp(str1, str2, 5);
//     printf("Test 1: Expected 0, got %d\n", result);

//     // Test 2: Difference in first byte
//     char str3[] = "Hello";
//     char str4[] = "hello";
//     result = memcmp(str3, str4, 5);
//     printf("Test 2: Expected non-zero, got %d\n", result);

//     // Test 3: Null pointers for both s1 and s2
//      result = memcmp(NULL, NULL, 0);
//      printf("Test 3: Expected 0, got %d\n", result);

//     // Test 4: Null pointer for s1 with n > 0 (should handle gracefully)
//       //result = memcmp(NULL, str1, 5);
//     // printf("Test 4: Expected error or crash, got %d\n", result);

//     // Test 5: Null pointer for s2 with n > 0 (should handle gracefully)
//      // result = memcmp(str1, NULL, 5);
//     // printf("Test 5: Expected error or crash, got %d\n", result);

//     // Test 6: Large n value (potential overflow if not handled)
//      result = memcmp(str1, str2, SIZE_MAX);
//      printf("Test 6: Large n, got %d\n", result);

//     // Test 7: Partial overlap (should not crash, but may behave unpredictably)
   
//     char buffer[] = "abcdefgh";
//     result = memcmp(buffer, buffer + 2, 5);
//     printf("Test 7: Overlap, got %d\n", result);
    
    
//     // Test 8: Empty strings with n = 0
//     result = memcmp("", "", 0);
//     printf("Test 8: Expected 0, got %d\n", result);

//     // Test 9: Comparison with an empty string (should return non-zero)
//     result = memcmp("Hello", "", 5);
//     printf("Test 9: Expected non-zero, got %d\n", result);

//     // Test 10: Comparison of different types of memory (e.g., int vs. char array)
//     int int_arr[] = {1, 2, 3};
//     result = memcmp(int_arr, str1, sizeof(int_arr));
//     printf("Test 10: Different types, got %d\n", result);

//     return 0;
// }
// //memcmp : Test 2: Expected non-zero, got -32
// //ft_memcmp : Test 2: Expected non-zero, got -1

// //memcmp : Test 6: Large n, got -72
// //ft_memcmp : Test 6: Large n, got -1


// //memcmp : Test 7: Overlap, got -2
// //ft_memcmp : Test 7: Overlap, got -1

// //memcmp : Test 10: Different types, got -71;
// //ft_memcmp : Test 10: Different types, got -1;


