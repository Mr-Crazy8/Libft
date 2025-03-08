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
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;
	size_t				i;

	ptr = (unsigned const char *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr == (unsigned char) c)
			return ((void *)ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
