/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:09:05 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/05 17:55:38 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

//static char    *ft_strcpy(char *dest, char *src)
//{
 //   int    i;
//
  //  i = 0;
 //   while (src[i] != '\0')
 //   {
  //      dest[i] = src[i];
  //      i++;
  //  }
  //  dest[i] = '\0';
   // return (dest);
//}
/*char    *ft_itoa(int nbr)
{
    int        is_negative;
    int        len;
    int        temp;
    char    *str;
    int        i;

    if (nbr == -2147483648)
    {
        str = (char *)malloc(12 * sizeof(char));
        if (str == NULL)
            return (NULL);
        return (ft_strcpy(str, "-2147483648"));
    }
    if (nbr == 0)
    {
        str = (char *)malloc(2 * sizeof(char));
        if (str == NULL)
            return (NULL);
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    is_negative = 0;
    if (nbr < 0)
    {
        is_negative = 1;
        nbr = -nbr;
    }
    len = 0;
    temp = nbr;
    while (temp > 0)
    {
        temp /= 10;
        len++;
    }
    if (is_negative)
        len++;
    str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (nbr > 0)
    {
        str[i++] = (nbr % 10) + '0';
        nbr /= 10;
    }
    if (is_negative)
        str[i++] = '-';
    str[i] = '\0';

    int start = 0;
    int end = i - 1;
    while (start < end)
    {
        char temp_char = str[start];
        str[start] = str[end];
        str[end] = temp_char;
        start++;
        end--;
    }
    return (str);
}*/

//static int    ft_strlen(char *str)
//{
//    int    i;
//
 //   i = 0;
 //   while (str[i] != '\0')
  //  {
  //      i++;
 //   }
  //  return (i);
//}

//static char    *ft_strdup(char *src)
//{
 //   int        i;
  //  int        j;
  //  int        src_len;
   // char    *dup;
//
   // i = 0;
   // j = 0;
   // src_len = ft_strlen(src);
   // dup = (char *)malloc(src_len + 1);
   // while (src[i] != '\0')
   // {
   //     dup[j] = src[i];
    //    j++;
   //     i++;
   // }
   // dup[i] = '\0';
//return (dup);
//}
char *ft_itoa(int nbr) {
    char *str;
    int len = 0, temp = nbr;

    if (nbr == -2147483648) return ft_strdup("-2147483648");
    if (nbr == 0) return ft_strdup("0");
    if (nbr < 0) {
        nbr = -nbr;
        len++;
    }

    while (temp) {
        temp /= 10;
        len++;
    }
    str = (char *)malloc(len + 1);
    if (!str) return NULL;

    str[len] = '\0';
    while (nbr) {
        str[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    
    if (len == 1) str[0] = '-';
    return str;
}
