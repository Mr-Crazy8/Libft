/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:49:40 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/29 14:52:53 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

size_t ft_strlen(const char *s) {
    size_t i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (s == NULL || f == NULL) {
        return NULL;
    }

    size_t len = ft_strlen(s);
    char *result = malloc(len + 1); // Allocate memory for the new string
    if (result == NULL) {
        return NULL;
    }
    size_t i;
    i = 0;
    while (i < len) {
        result[i] = f(i, s[i]); // Apply the function f to each character
        i++;
    }
    result[len] = '\0'; // Null-terminate the new string
    return result; // Return the newly created string
}
