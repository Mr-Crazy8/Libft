/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:32:46 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:19:29 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int nbr, int fd)
{
    if (nbr == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = -nbr;
    }
    if (nbr >= 10)
    {
        ft_putnbr_fd(nbr / 10, fd);
    }
    ft_putchar_fd(nbr % 10 + '0', fd);
}

//int main()
//{
   // Test 1: Positive Number
 //   int fd1 = open("test_positive.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
   // if (fd1 == -1) { perror("error opening file"); return 1; }
  //  ft_putnbr_fd(1234, fd1);
	//close(fd1);

    // Test 2: Negative Number
  //  int fd2 = open("test_negative.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
   // if (fd2 == -1) { perror("error opening file"); return 1; }
  //  ft_putnbr_fd(-5678, fd2);
  //  close(fd2);

    // Test 3: Zero
   // int fd3 = open("test_zero.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
   // if (fd3 == -1) { perror("error opening file"); return 1; }
   // ft_putnbr_fd(0, fd3);
  //  close(fd3);

    // Test 4: Minimum Integer Value
   // int fd4 = open("test_min_int.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  //  if (fd4 == -1) { perror("error opening file"); return 1; }
  //  ft_putnbr_fd(-2147483648, fd4);
   // close(fd4);

    // Test 5: Maximum Integer Value
   // int fd5 = open("test_max_int.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
   // if (fd5 == -1) { perror("error opening file"); return 1; }
   // ft_putnbr_fd(2147483647, fd5);
   // close(fd5);

   // return 0; // Indicate successful completion
//}
