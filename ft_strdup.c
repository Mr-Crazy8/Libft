/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:32:14 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:33:49 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"

//static int ft_strlen(const char *s)
//{
//	int i;
//
//	i = 0;
//	while (s[i] != '\0')
//	{
//		i++;
	//}
//	return (i);
//}

char *ft_strdup(const char *s)
{
	
	int i;
	int j;
	int s_len;
	char *dup;



	i = 0;
	j = 0;
	s_len = ft_strlen(s);
	dup = (char *)malloc(s_len + 1);
	if (dup == NULL)
	{
		return NULL;
	}
	while (s[i] != '\0')
	{
		dup[j] = s[i];
		j++;
		i++;
	}
	dup[j] = '\0';
	return dup;
}




//void test_strdup(const char *input) {
 //   char *original = strdup(input);
 //   char *custom = strdup(input);

  //  if ((original == NULL && custom == NULL) || 
    //    (original != NULL && custom != NULL && strcmp(original, custom) == 0)) {
  //      printf("Test passed for input: '%s'\n", input);
   // } else {
   //     printf("Test failed for input: '%s'\n", input);
   //     printf("Original: '%s', Custom: '%s'\n", original, custom);
  //  }

  //  free(original);
   // free(custom);
//}

//int main() {
    //test_strdup("Hello, World!");
    //test_strdup("");
    //test_strdup("A");
    //test_strdup("   ");
    //test_strdup("!@#$%^&*()");
    //test_strdup("Hello\nWorld");
    
    // Long string test
    //char long_string[10001];
    //memset(long_string, 'A', 10000);
    //long_string[10000] = '\0';
    //test_strdup(long_string);
    
    //test_strdup("Hello\0World"); // Note: This will not print correctly due to the null character.
    
    // Test for NULL input
    //ft_strdup(NULL); // Make sure your ft_strdup handles this case.

	//printf("test for NULL input : %s\n", strdup(NULL));

   // return 0;
//}