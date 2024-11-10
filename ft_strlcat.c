/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:41:07 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/07 10:36:10 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

// static size_t ft_strlen(const char *str)
// {
// 	size_t i;

// 	i = 0;
// 	while(str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i_dst;
	size_t i_src;
	size_t i;
	size_t j;

    i_src = ft_strlen(src);
    if (dst == NULL && src != NULL && size == 0)
        return (i_src);
    i_dst = ft_strlen(dst);
	i = i_dst;
	j = 0;
	if (size <= i)
		return (size + i_src);
	while (src[j] != '\0' &&  i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i_dst + i_src);

}

// int main()
// {
//     printf("%zu", strlcat(NULL, "anas", 0));
// }
