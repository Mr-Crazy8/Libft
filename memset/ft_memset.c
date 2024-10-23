/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:59:50 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 19:22:47 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


void	*ft_memset(void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *ptr = (unsigned char *)s;
    while(n--)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}

	return s;

}
int main()
{
	char buffer[10] = "anass";
	ft_memset(buffer, 'x', 5);
	printf("%s\n", buffer);
}
