/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:57:02 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 14:14:22 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
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

char *ft_strrchr(const char *str, int c)
{
    
    
	int i = ft_strlen(str);
	while (i >= 0)
	{
        if(str[i] == (char)c)
            return (char *)&str[i];
        i--;
    }
    return NULL;
}

// int main() {
//     char *result;

//     // **Test 1: Normal case - Character found**
//     const char *str1 = "Hello, world!";
//     result = ft_strrchr(str1, 'o');
//     printf("Test 1: Expected: %p, got: %p\n", strrchr(str1, 'o'), result);

//     // **Test 2: Character not found**
//     const char *str2 = "Hello, world!";
//     result = ft_strrchr(str2, 'z');
//     printf("Test 2: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 3: Find the null terminator (c = 0)**
//     const char *str3 = "Hello, world!";
//     result = ft_strrchr(str3, '\0');
//     printf("Test 3: Expected: %p, got: %p\n", strrchr(str3, '\0'), result);

//     // **Test 4: Empty string**
//     const char *str4 = "";
//     result = ft_strrchr(str4, 'a');
//     printf("Test 4: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 5: Find null terminator in an empty string**
//     const char *str5 = "";
//     result = ft_strrchr(str5, '\0');
//     printf("Test 5: Expected: %p, got: %p\n", strrchr(str5, '\0'), result);

//     // **Test 6: Multiple occurrences of character**
//     const char *str6 = "banana";
//     result = ft_strrchr(str6, 'a');
//     printf("Test 6: Expected: %p, got: %p\n", strrchr(str6, 'a'), result);

//     // **Test 7: Large character value (greater than 127)**
//     const char *str7 = "Hello, world!";
//     result = ft_strrchr(str7, 200);  // Character outside ASCII range
//     printf("Test 7: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 8: NULL input string (undefined behavior)**
//       const char *str8 = NULL;
//     // Uncomment to test, but may cause undefined behavior or crash
//       result = ft_strrchr(str8, 'a');
//        printf("Test 8: NULL input string, expected crash or NULL, got: %p\n", (void*)result);

//     // **Test 9: Match at the start**
//     const char *str9 = "apple";
//     result = ft_strrchr(str9, 'a');
//     printf("Test 9: Expected: %p, got: %p\n", strrchr(str9, 'a'), result);

//     // **Test 10: Case-sensitive search**
//     const char *str10 = "CaseSensitive";
//     result = ft_strrchr(str10, 'c');
//     printf("Test 10: Expected: NULL, got: %p\n", (void*)result);

//     return 0;
// }
