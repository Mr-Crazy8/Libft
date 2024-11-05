/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:15:49 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/27 19:31:20 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	 ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
	
}

//int main()
//{
//	int fd = open("s.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	if (fd == -1)
//	{
//		perror("error");
//		return 1;
//	}
//	ft_putendl_fd("anass", fd);
//	close(fd);
//}
