/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:36:20 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 09:18:22 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int sing = 1;
	int res = 0;
	while (str[i] == 32 ||str[i] <= 9 && str[i] >= 13)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sing *= -1;
		}
		else if(str[i + 1] == '-' || str[i + 1] == '+')
		{
			return (0);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res*sing;
}
int main()
{
	char str[] = "-+-+--+12345";
	int num0 = ft_atoi(str);
	int num = atoi(str);
	printf(" '-+-+--+12345' in atoi Integer value: '%d'\n", num);
	printf(" '-+-+--+12345' in ft_atoi Integer Value: '%d'\n", num0);

	return 0;
}
