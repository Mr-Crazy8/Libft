/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:09:05 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/13 09:09:05 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(long c)
{
	int	count;

	count = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		count = 1;
		c = -c;
	}
	while (c != 0)
	{
		c /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*ptr;

	nb = n;
	len = ft_len(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	ptr = (char *)malloc(sizeof(char) * (len +1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ptr[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (ptr);
}
