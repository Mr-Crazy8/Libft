/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:42:13 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/25 18:51:47 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i = 0;
	size_t j = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return NULL;
	}
	size_t s1_len = ft_strlen(s1);
	size_t s2_len = ft_strlen(s2);
	char *s3 = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return NULL;
	}
	while (i < s1_len)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return s3;
}

int main()
{
	const char *str1 = "Hello, ";
	const char *str2 = "world!";
	char *result = ft_strjoin(str1, str2);
	if(result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("F\n");

	}
	return 0;
}
