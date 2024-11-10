/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:13:28 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/24 17:01:52 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "libft.h"

// static int ft_strlen(const char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return i;
// }

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i = 0;
	size_t j;
  if (big == NULL && len == 0) 
  {
    return NULL;
  }
	if (*little == '\0')
	{
		return (char *)big;
	}
	while (big[i] != '\0' && i < len)
	{
		if (i + ft_strlen(little) > len)
		{
			return NULL;
		}
		j = 0;
		while (little[j] != '\0' && big[i+j] == little[j] && (i+j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return (char *)&big[i];
		}
		i++;
	}
	return NULL;
}

// int main() {
//     char *result;

//     // **Test 1: Basic Match within bounds**
//     //const char *big1 = NULL;
//     //const char *little1 = "world";
//     //result = ft_strnstr(big1, little1, 0);
//     //printf("Test 1: Expected: %p, got: %p\n", strnstr(big1, little1, 0), result);
//     printf("strnstr %s \n", strnstr("NULL", "little1", 0));

//     // **Test 2: Match at the start**
//     /*const char *big2 = "Hello, world!";
//     const char *little2 = "Hello";
//     result = strnstr(big2, little2, 5);
//     printf("Test 2: Expected: %p, got: %p\n", strnstr(big2, little2, 5), result);

//     // **Test 3: No match within bounds**
//     const char *big3 = "Hello, world!";
//     const char *little3 = "planet";
//     result = strnstr(big3, little3, 10);
//     printf("Test 3: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 4: Little string is empty**
//     const char *big4 = "Hello, world!";
//     const char *little4 = "";
//     result = strnstr(big4, little4, 5);
//     printf("Test 4: Expected: %p, got: %p\n", strnstr(big4, little4, 5), result);

//     // **Test 5: Length limit shorter than position of match**
//     const char *big5 = "Hello, world!";
//     const char *little5 = "world";
//     result = strnstr(big5, little5, 5);
//     printf("Test 5: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 6: Exact length for little string**
//     const char *big6 = "Hello, world!";
//     const char *little6 = "world";
//     result = strnstr(big6, little6, 11);
//     printf("Test 6: Expected: %p, got: %p\n", strnstr(big6, little6, 11), result);

//     // **Test 7: Empty big string**
//     const char *big7 = "";
//     const char *little7 = "world";
//     result = strnstr(big7, little7, 5);
//     printf("Test 7: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 8: Both big and little are empty**
//     const char *big8 = "";
//     const char *little8 = "";
//     result = strnstr(big8, little8, 5);
//     printf("Test 8: Expected: %p, got: %p\n", strnstr(big8, little8, 5), result);

//     // **Test 9: Large length limit**
//     const char *big9 = "Hello";
//     const char *little9 = "o";
//     result = strnstr(big9, little9, SIZE_MAX);  // Unrealistically large length
//     printf("Test 9: Expected: %p, got: %p\n", strnstr(big9, little9, SIZE_MAX), result);

//     // **Test 10: Case-sensitive match**
//     const char *big10 = "Hello, World!";
//     const char *little10 = "world";
//     result = strnstr(big10, little10, 13);
//     printf("Test 10: Expected: NULL, got: %p\n", (void*)result);

//     // **Test 11: Null big string**
//     // const char *big11 = NULL;
//     // const char *little11 = "hello";
//     //  Uncomment to test, but may cause undefined behavior or crash
//     //  result =  strnstr(big11, little11, 5);
//     //  printf("Test 11: NULL big string, expected crash or NULL, got: %p\n", (void*)result);

//     // **Test 12: Null little string**
//     //const char *big12 = "Hello, world!";
//     // const char *little12 = NULL;
//      // // Uncomment to test, but may cause undefined behavior or crash
//       //result = strnstr(big12, little12, 5);
//       // printf("Test 12: NULL little string, expected crash or NULL, got: %p\n", (void*)result);
//       */
//     return 0;
// }
