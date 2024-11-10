/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:24:24 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/06 19:30:42 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd = open("jj.txt", O_WRONLY | O_CREAT, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error opening file");
// 		return 1;
// 	}

// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('\n', fd);

// 	close(fd);
// 	return 0;
// }
