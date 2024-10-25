/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:49 by anel-men          #+#    #+#             */
/*   Updated: 2024/10/25 18:39:39 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	//nmemb : the number of elements.
	//size : the size of each element in bytes.
	//it returns a void *, which is generic pointer, pointing to the allocated memory.
	size_t total_size = nmemb * size;
	//calculate the total size Needed
	void *ptr = malloc(total_size);
	//allocate memory.
	size_t i = 0;
	if (ptr == NULL)
	{
		return NULL;
	}
	//check if Memory Allocation Faild
	unsigned char *b_ptr = (unsigned char *)ptr;
	//this casts ptr(a void * pointer) to an unsigned char * pointer.
	//unsigned char *is used here because we want to access the memory byte-by-byte (since each byte is 1 byte long).
	//the casting is necessary because void *does not have a specific data type and cannot be dereferenced.
	while (i < total_size)
	{
		b_ptr[i] = 0;
		i++;
	}
	//Initialize Allocated Memory to Zero
	return ptr;
	//return the pointer to the allocated memory

}

int main()
{

}
