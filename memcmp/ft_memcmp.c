/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:11:56 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 18:54:03 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

	size_t i = 0;

	while (i < n)
	{
		if (p1[i] < p2[i])
		{
			return -1;
		}
		else if (p1[i] > p2[i])
		{
			return 1;
		}
		i++;
	}
	return 0;
}
