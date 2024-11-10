/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:54:42 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/08 11:23:30 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (n--)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char str[] = "Hello, World!";
// 	ft_bzero(str, 10);
// 	printf("%s\n", str);
// }