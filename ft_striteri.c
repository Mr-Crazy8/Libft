/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:37:39 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/27 15:59:43 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//void ex_func(unsigned int index, char *c)
//{
//	if (*c >= 'a' && *c <= 'z')
//	{
//		*c -= 32;
	//}
//}
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (s == NULL || f == NULL)
	{
		return;

	}

	size_t len = ft_strlen(s);
	size_t i;
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

//int main()
//{
//	char str[] = "hello world";
//	ft_striteri(str, ex_func);
//	printf("%s\n", str);
//	return 0;
//}
