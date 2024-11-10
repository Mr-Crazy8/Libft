/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:06:00 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/08 16:56:02 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"


void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	size_t i = 0;
    
	if(d == NULL && s == NULL)
	      return NULL;
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	
	return dest;
}

//int main()
//{
//	ft_memmove(((void *)0), ((void *)0), 5);
//}

// //00000000 00000000 00000101 00111001
