/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:43:02 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 17:40:38 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>
#include "libft.h"





// static int ft_strlen(const char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
void *ft_memchr(const void *s, int c, size_t n)
{
	const char *ptr = (const char *)s;
	size_t i = 0;

	while (i < n)
	{
		if(*ptr == (char)c)
			return (void *)ptr;
		ptr++;
		i++;
	}
	return NULL;
}


// int main() {
//     void *result;
//     int length;

//     // Test 1: Basic string length
//     const char *str1 = "Hello, World!";
//     length = ft_strlen(str1);
//     printf("Test 1: Expected %zu, got %d\n", strlen(str1), length);

//     // Test 2: Empty string
//     const char *str2 = "";
//     length = ft_strlen(str2);
//     printf("Test 2: Expected 0, got %d\n", length);

//     // Test 3: Null pointer for ft_strlen (may crash or behave unpredictably)
//     //length = ft_strlen(NULL);
//    // printf("Test 3: Expected error or crash, got %d\n", length);

//     // Test 4: Null pointer for ft_memchr with n = 0
//     result = ft_memchr(NULL, 'a', 0);
//     printf("Test 4: Expected NULL, got %p\n", result);

//     // Test 5: Null pointer for ft_memchr with n > 0 (may crash)
//     //result = ft_memchr(NULL, 'a', 5);
//    // printf("Test 5: Expected error or crash, got %p\n", result);

//     // Test 6: Search for character not in string
//     const char *str3 = "abcdefg";
//     result = ft_memchr(str3, 'x', strlen(str3));
//     printf("Test 6: Expected NULL, got %p\n", result);

//     // Test 7: Search for character at beginning of string
//     result = ft_memchr(str3, 'a', strlen(str3));
//     printf("Test 7: Expected non-NULL, got %p\n", result);

//     // Test 8: Search for character at end of string
//     result = ft_memchr(str3, 'g', strlen(str3));
//     printf("Test 8: Expected non-NULL, got %p\n", result);

//     // Test 9: Search in first n bytes only
//     result = ft_memchr(str3, 'g', 3);  // 'g' is outside the first 3 bytes
//     printf("Test 9: Expected NULL, got %p\n", result);

//     // Test 10: Search for a non-ASCII character
//     const char *str4 = "abc\xFF";
//     result = ft_memchr(str4, '\xFF', strlen(str4));
//     printf("Test 10: Expected non-NULL, got %p\n", result);

//     // Test 11: Large n value (may cause overflow or memory issues)
//     result = ft_memchr(str1, 'W', SIZE_MAX);  // Unrealistically large
//     printf("Test 11: Expected error or crash, got %p\n", result);

//     // Test 12: Search with n = 0
//     result = ft_memchr(str3, 'a', 0);
//     printf("Test 12: Expected NULL, got %p\n", result);

//     // Test 13: Partially overlapping memory (if allowed by your system)
//     char buffer[] = "abcdefg";
//     result = ft_memchr(buffer, 'd', 5);  // Search within range but with partial overlap
//     printf("Test 13: Expected non-NULL, got %p\n", result);

//     // Test 14: Very long string
//     const char *str5 = "a very very long string to test boundary conditions in ft_memchr function";
//     result = ft_memchr(str5, 'i', strlen(str5));
//     printf("Test 14: Expected non-NULL, got %p\n", result);

//     // Test 15: Checking with signed and unsigned characters
//     const char *str6 = "test\x80";
//     result = ft_memchr(str6, '\x80', strlen(str6));
//     printf("Test 15: Expected non-NULL, got %p\n", result);

//     return 0;
// }
