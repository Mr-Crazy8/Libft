/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:39:55 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:42:01 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
unsigned int ft_strlen(const char *str)
{
    unsigned int i;
    
    i = 0;
    while (str[i] != '\0')
	{
        i++;
    }
    return (i);
}
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
    size_t src_len;

	i = 0;
    src_len = ft_strlen(src);
	if (size == 0)
	{
		return (src_len);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
