/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:54:05 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/23 10:48:57 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1,const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}
int main() {
    int result1 = strncmp("z", "d", 3);
    int result2 = strncmp("apple", "apricot", 5);
    int result3 = strncmp("banana", "band", 3);

    printf("Result of strncmp(\"apple\", \"apricot\", 3): %d\n", result1);
    printf("Result of strncmp(\"apple\", \"apricot\", 5): %d\n", result2);
    printf("Result of strncmp(\"banana\", \"band\", 3): %d\n", result3);

    return 0;
}
