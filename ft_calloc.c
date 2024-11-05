/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:49 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/05 17:21:48 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*b_ptr;
	size_t			i;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	i = 0;
	if (ptr == NULL)
	{
		return (NULL);
	}
	b_ptr = (unsigned char *)ptr;
	while (i < total_size)
	{
		b_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
