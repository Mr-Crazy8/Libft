/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:06:36 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:53:46 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

// static int ft_strlen(const char *s)
// {
// 	int i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return i;
// }
// static char	*ft_strdup(const char *s)
// {
// 	int i;
// 	int j;
// 	int s_len;
// 	char *dup;

// 	i = 0;
// 	j = 0;
// 	if (s == NULL)
// 	{
// 		return NULL;
// 	}
// 	s_len = ft_strlen(s);
// 	dup = (char *)malloc(s_len + 1);
// 	if (dup == NULL)
// 	{
// 		return NULL;
// 	}
// 	while (s[i] != '\0')
// 	{
// 		dup[j] = s[i];
// 		j++;
// 		i++;
// 	}
// 	dup[j] = '\0';
// 	return dup;
// }
static char *ft_strncpy(char *dest, const char *src, unsigned int n)
 {
	unsigned int i;

	i = 0;
 	while(src[i] != '\0' && i < n) 	
	{
 		dest[i] = src[i];
		i++;
 	}
 	while (i < n)
 	{
		dest[i] = '\0';
		i++;
 	}
 	return (dest);
 }
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	//size_t i = 0;
	if(s == NULL)
	{
		return NULL;
	}
	
	size_t s_len = ft_strlen(s);
	if (start >= s_len)
		return ft_strdup("");
	if (len > s_len - start)
		len = s_len - start;
	char *substr = (char *)malloc((len + 1) * sizeof(char));
	if(substr == NULL)
		return NULL;
	ft_strncpy(substr, s + start, len);
	substr[len] = '\0';

	return (substr);
}

//int main()
//{
//	char const *s = "anass elmendili,";
//	unsigned int start = 6;
//	size_t len = 4;
//	char *substr = ft_substr(s, start, len);
//	printf("%s .\n", substr);
//}




// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <string.h>

// // Assuming ft_substr is defined here...

// void test_ft_substr(const char *s, unsigned int start, size_t len) {
//     char *result = ft_substr(s, start, len);
//     if (result == NULL) {
//         printf("ft_substr returned NULL for input (s=%s, start=%u, len=%zu)\n", s ? s : "NULL", start, len);
//     } else {
//         printf("ft_substr result: '%s' for input (s=%s, start=%u, len=%zu)\n", result, s ? s : "NULL", start, len);
//         free(result); // Free allocated memory
//     }
// }

// int main() {
//     // Normal test cases
//     /*printf("Normal Test Cases:\n");
//     test_ft_substr(NULL, 0, 5);                  // Case 1: NULL input
//     test_ft_substr("example", 10, 5);            // Case 2: Start greater than string length
//     test_ft_substr("example", 7, 5);             // Case 3: Start equal to string length
//     test_ft_substr("example", 2, 10);            // Case 4: Length greater than remaining characters
//     test_ft_substr("example", 2, 0);             // Case 5: Length zero
//     test_ft_substr("example", 0, 7);             // Case 6: Exact length of the string
//     test_ft_substr("", 0, 5);                     // Case 7: Empty string input
//     test_ft_substr("example", 2, 0);             // Case 8: Start within string but length zero
// */
//     // Potentially crashing test cases
//     printf("\nPotentially Crashing Test Cases:\n");
//     test_ft_substr(NULL, 0, 5);                  // Case 1: NULL input
//     //test_ft_substr("example", UINT_MAX, 5);      // Case 2: Out-of-bounds start index (large value)
//     //test_ft_substr("example", -1, 5);             // Case 3: Negative start index (if applicable)
//     //test_ft_substr("example", 2, SIZE_MAX);       // Case 4: Length greater than maximum size
//     //test_ft_substr("example", 100, 5);            // Case 5: Start index greater than string length
//     //test_ft_substr("", 1, 5);                      // Case 6: Empty string with non-zero start

//     return 0;
// }