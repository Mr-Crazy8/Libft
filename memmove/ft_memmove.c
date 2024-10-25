/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:06:00 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/24 15:19:21 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
	// step 1: Cast to unsigned char* for byte-by-byte copying
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	size_t i = 0;

	//step 2: check for overlap
	if (d > s)
	{
		//step 3: overlap detected, copy backwards
		//start at the end and copy backwards
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		//step 4: no overlap, or destination is before source, copy forwards
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	//step 5 : return destination pointer
	return dest;
}
