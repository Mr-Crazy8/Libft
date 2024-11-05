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
#include <string.h>
#include <stdlib.h>
int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strdup(const char *s)
{
	//s : the original string.
	//Returns: A pointer to a newly allocated copy of the string.
	int i;
	int j;
	int s_len;
	char *dup;

	i = 0;
	j = 0;
	if (s == NULL)
	{
		return NULL;
	}
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
