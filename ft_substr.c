/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:06:36 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:53:46 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
char	*ft_strdup(const char *s)
{
	int i;
	int j;
	int s_len;
	char *dup;

	i = 0;
	j = 0;
	if (s == NULL)
	{
		return NULL;
	}
	s_len = ft_strlen(s);
	dup = (char *)malloc(s_len + 1);
	if (dup == NULL)
	{
		return NULL;
	}
	while (s[i] != '\0')
	{
		dup[j] = s[i];
		j++;
		i++;
	}
	dup[j] = '\0';
	return dup;
}
char *ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	//size_t i = 0;
	size_t s_len = ft_strlen(s);
	if(s == NULL)
	{
		return NULL;
	}
	if (start >= s_len)
		return ft_strdup("");
	if (len > s_len - start)
		len = s_len - start;
	char *substr = (char *)malloc((len + 1) * sizeof(char));
	if(substr == NULL)
		return NULL;
	ft_strncpy(substr, s + start, len);
	substr[len] = '\0';

	return (substr);
}

//int main()
//{
//	char const *s = "anass elmendili,";
//	unsigned int start = 6;
//	size_t len = 4;
//	char *substr = ft_substr(s, start, len);
//	printf("%s .\n", substr);
//}
