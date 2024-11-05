/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:24:24 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/28 10:36:48 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int main()
//{
//	int fd = open("ort.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	if (fd == -1)
//	{
	//	perror("Error opening file");
	//	return 1;
	//}

//	ft_putchar_fd('H', fd);
//	ft_putchar_fd('e', fd);
//	ft_putchar_fd('l', fd);
//	ft_putchar_fd('l', fd);
//	ft_putchar_fd('o', fd);
//	ft_putchar_fd('!', fd);
//	ft_putchar_fd('\n', fd);
//
//	close(fd);
//	return 0;
//}
