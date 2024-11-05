/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:41:35 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/31 14:01:10 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

#include <stddef.h>
#include <stdlib.h>

unsigned int ft_strlen(const char *str)
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int src_len = ft_strlen(src);
    unsigned int i = 0;
    if (size == 0)
        return src_len;
    while (i + 1 < size && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return src_len;
}

char **ft_split(char const *s, char c)
{
    if (s == NULL)
        return NULL;

    // Step 1: Count the number of words
    size_t i = 0, n = 0;
    while (s[i])
    {
        if ((s[i] != c && (i == 0 || s[i - 1] == c)))
            n++;
        i++;
    }

    // Step 2: Allocate memory for the split array
    char **split = (char **)malloc((n + 1) * sizeof(char *));
    if (split == NULL)
        return NULL;

    // Step 3: Split the string
    i = 0;
    size_t j = 0;
    while (s[i] && j < n)
    {
        // Skip delimiters
        while (s[i] == c)
            i++;
        // Determine the start and length of the word
        size_t start = i;
        while (s[i] != c && s[i] != '\0')
            i++;
        size_t len = i - start;

        // Allocate and copy the word
        split[j] = (char *)malloc((len + 1) * sizeof(char));
        if (!split[j])
        {
            // Free previously allocated memory if allocation fails
            size_t k = 0;
            while (k < j)
            {
                free(split[k]);
                k++;
            }
            free(split);
            return NULL;
        }
        ft_strlcpy(split[j], &s[start], len + 1);
        j++;
    }

    // Null-terminate the array of strings
    split[j] = NULL;
    return split;
}

