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

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *str, int c)
{
	int i = ft_strlen(str);
	while (str[i] != c)
	{
		i--;
	}
	if(str[i] == c)
	{
		return (char *)&str[i];
	}
	else
		return (char *)str;
}

int main()
{
	char s[] = "some,data,in,commas";
	char *comma = ft_strrchr(s, ',');
	char *comma0 = strrchr(s, ',');
	printf("ft_strrch  : %s\n", comma);
	printf("strrch  : %s\n", comma0);
}
