/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:54:05 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 10:48:57 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>
#include "libft.h"


int ft_strncmp(const char *s1,const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}

// int main()
// {
//     int result;

//     // 1. Normal comparison
//     result = strncmp("Hello", "Hello", 5);
//     printf("Test 1 - Same strings: Expected 0, got %d\n", result);

//     // 2. Different strings
//     result = strncmp("Hello", "World", 5);
//     printf("Test 2 - Different strings: Expected non-zero, got %d\n", result);

//     // 3. n is zero
//     result = strncmp("Hello", "Hello", 0);
//     printf("Test 3 - n = 0: Expected 0, got %d\n", result);

//     // 4. One string is shorter than n
//      char a[] = "Hello";
//      char b[] = "He";
//     int n = 5;
//     result = strncmp(a, b, n);
//     printf("Test 4 - First string longer than second: Expected positive, got %d\n", result);

//     // 5. Second string shorter than n
//     result = strncmp("He", "Hello", 5);
//     printf("Test 5 - Second string longer than first: Expected negative, got %d\n", result);

//     // 6. Both strings are empty
//     result = strncmp("", "", 5);
//     printf("Test 6 - Both empty strings: Expected 0, got %d\n", result);

//     // 7. Comparing with NULL (unsafe, may cause undefined behavior)
//    // const char *null_ptr = NULL;
//     // result = strncmp(null_ptr, "Hello", 5); // Expected: crash (commented out for safety)

//     // 8. Very large `n` (may cause undefined behavior if strings are not long enough)
//     const char *str1 = "Hello";
//     const char *str2 = "Hello";
//     result = strncmp(str1, str2, SIZE_MAX); // Unrealistically large
//     printf("Test 8 - Large n: Expected 0, got %d\n", result);

//     // 9. One string has a null character in the middle
//     result = strncmp("Hel\0lo", "Hel\0world", 6);
//     printf("Test 9 - Null character in the middle: Expected 0, got %d\n", result);

//     // 10. Partial match where n is smaller than the string length
//     result = strncmp("Hello", "Hella", 4);
//     printf("Test 10 - Partial match with n < len: Expected 0, got %d\n", result);

//     // 11. One string longer but matches up to n
//     result = strncmp("HelloWorld", "Hello", 5);
//     printf("Test 11 - Longer string with full match up to n: Expected 0, got %d\n", result);

//     return 0;
// }

//  int main()
//  {
//     int result;
    
//     char str[]=  " Hello";
//     result = strncmp("H", "L", 5);
//     printf("Test 1 - Same strings: Expected 0, got %d\n", result);
//     char *str1 = "H";
//     char *str2 = "L";
//     result = strncmp(str1, str2, 5); // Unrealistically large
//     printf("Test 8 - Large n: Expected 0, got %d\n", result);

//  }