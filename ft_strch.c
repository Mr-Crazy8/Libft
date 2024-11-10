/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:42:43 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 11:24:57 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

 char *ft_strchr (const char *s, int c)
{
	size_t j= ft_strlen(s);
	if (!c){
		return ((char *)&s[j]);
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
			return (char *)s;
		s++;
	}
    if (c == 0)
        return (char *)s;
	return NULL;
}

// int main() {
//     char *result;

//     // **Test 1: Normal case - Character found**
//     const char *str1 = "Hello, world!";
//     result = strchr(str1, 'w');
//     printf("Test 1: Expected: %p, got: %p\n", strchr(str1, 'w'), result);

//     // **Test 2: Character not found**
//     const char *str2 = "Hello, world!";
//     result = strchr(str2, 'z');
//     printf("Test 2: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 3: Find the null terminator (c = 0)**
//     const char *str3 = "Hello, world!";
//     result = strchr(str3, '\0');
//     printf("Test 3: Expected: %p, got: %p\n", strchr(str3, '\0'), result);

//     // **Test 4: Empty string**
//     const char *str4 = "";
//     result = strchr(str4, 'a');
//     printf("Test 4: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 5: Find null terminator in an empty string**
//     const char *str5 = "";
//     result = strchr(str5, '\0');
//     printf("Test 5: Expected: %p, got: %p\n", strchr(str5, '\0'), result);

//     // **Test 6: String with multiple occurrences of character**
//     const char *str6 = "banana";
//     result = strchr(str6, 'a');
//     printf("Test 6: Expected: %p, got: %p\n", strchr(str6, 'a'), result);

//     // **Test 7: Large character value (greater than 127)**
//     const char *str7 = "Hello, world!";
//     result = strchr(str7, 200);  // Character outside ASCII range
//     printf("Test 7: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 8: NULL input string (undefined behavior)**
//      const char *str8 = NULL;
//     // Uncomment to test, but it may cause undefined behavior and crash
//       result = strchr(str8, 'a');
//       printf("Test 8: NULL input string, expected crash or NULL, got: %p\n", (void*)result);

//     // **Test 9: First character match**
//     const char *str9 = "apple";
//     result = strchr(str9, 'a');
//     printf("Test 9: Expected: %p, got: %p\n", strchr(str9, 'a'), result);

//     // **Test 10: Case-sensitive match**
//     const char *str10 = "CaseSensitive";
//     result = strchr(str10, 'c');
//     printf("Test 10: Expected: NULL, got: %p\n", (void*)result);

//     return 0;
// }
