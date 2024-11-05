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
char *ft_strchr (const char *s, int c)
{
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

//int main()
//{
//	char *s = "This is My string!";
//	char *r = ft_strchr(s, 'r');
//	printf("r : %s\n", r);
//
//	char *e = ft_strchr(s, 'e');
//
//	if (e == NULL)
//		printf("Null\n");
//}
