/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:03:16 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/27 19:14:04 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

//int	main()
//{
//	int fd = open("a.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	if (fd == -1)
//	{
//		perror("error");
//		return 1;
//	}
//	ft_putstr_fd("anass\n", fd);
//	close(fd);
//}
