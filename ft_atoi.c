/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:36:20 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/05 17:08:13 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

#include <limits.h>

static int	check_overflow(long long res, int sign, char digit)
{
	if (res > (LONG_MAX - (digit - '0')) / 10)
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	return (0);
}

static void	skip_whitespace(const char *str, int *i)
{
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;
	int			overflow;

	i = 0;
	res = 0;
	skip_whitespace(str, &i);
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		overflow = check_overflow(res, sign, str[i]);
		if (overflow != 0)
			return (overflow);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
