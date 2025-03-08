/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:49 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/12 10:26:38 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*b_ptr;
	size_t			i;

	i = 0;
	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb && size
		&& total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	b_ptr = (unsigned char *)ptr;
	while (i < total_size)
	{
		b_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
