/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:59:50 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/08 17:14:35 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (n--)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	int r = 100;

// 	int g = 97;
// 	char p;

//     //01100001
// 	ft_memset(&r, 0, 4);
// 	p = *(char *)ft_memset(&r, 97, 1);
// 	printf("%c\n", p);
// }

