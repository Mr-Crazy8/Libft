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
int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i = 0;
	size_t j;
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

//int main()
//{
//	const char *big = "Hello, World!";
//	const char *little = "World";
//	char *result = ft_strnstr(big, little, 5);
//	if (result != NULL)
//		printf("Found: %s\n", result);
//	else
//	printf("Not found\n");
//
//	return 0;
//}
