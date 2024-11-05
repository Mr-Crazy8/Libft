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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
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



//int main() {
 //   int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
 //   int target = 4;
//
  //  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
  //      if (arr[i] == target) {
  //          printf("Found %d at index %d\n", target, i);
  //          return 0;
    //    }
  //  }
//
//    printf("Value %d not found.\n", target);
//   return 0;
//}
