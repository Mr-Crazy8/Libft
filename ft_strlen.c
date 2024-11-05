/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:34:54 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/22 09:35:12 by anel-men         ###   ########.fr       */
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

//int main()
//{
//	char str[] = "anass";
//
//	int i0 = ft_strlen(str);
//
//	int i1 = strlen(str);
//
//	printf("%d. \n", i0);
//	printf("%d. \n", i1);
//}
