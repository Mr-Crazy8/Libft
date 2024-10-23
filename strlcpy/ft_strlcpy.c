/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:39:55 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/22 13:55:41 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
	{
		return 0;
	}
	while (i < size - 1 && src != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return i;
}
