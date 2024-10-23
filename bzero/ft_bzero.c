/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:54:42 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 19:54:46 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	ft_bzero(void *s, size_t n)
{
	size_t i = 0;
	unsigned char *ptr = (unsigned char *)s;

	while(n--)
	{
		ptr[i] = '0';
		i++;
	}
}

int main()
{
	char buffer[10] = "anass";
	ft_bzero(buffer, 5);
	printf("%s\n", buffer);

}
