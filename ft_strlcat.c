/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:41:07 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:37:01 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i_dst;
	size_t i_src;
	size_t i;
	size_t j;

	i_dst = ft_strlen(dst);
	i_src = ft_strlen(src);
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

//int main() {
 //   char dst[] = "Hello";
 //   const char *src = ", world!";
//
// size_t len = ft_strlcat(dst, src, 3);
//
//    printf("Destination string: %s\n", dst);
//    printf("Total length of the concatenated string: %zu\n", len);
//
//    return 0;
//}

