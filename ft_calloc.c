/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:49 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/05 17:21:48 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*b_ptr;
	size_t			i;
	

	i = 0;
    total_size = nmemb * size;
    if (nmemb  && size  && total_size / nmemb != size)
	{
		return (NULL);
	}
	ptr = malloc(total_size);             
	if (ptr == NULL)
	{
		return (NULL);
	}
	b_ptr = (unsigned char *)ptr;
	
	while (i < total_size)
	{
		b_ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// int memory_compare(const void *ptr1, const void *ptr2, size_t size) {
//     return memcmp(ptr1, ptr2, size);
// }

// int main()
// {
//     void *result_ft;
//     void *result_std;

//     // 1. Normal case with small values
//     //result_ft =  ft_calloc(5, sizeof(int));
//    // result_std = calloc(5, sizeof(int));
//    // printf("Test 1 - Small allocation: %s\n",
//    //        memory_compare(result_ft, result_std, 5 * sizeof(int)) == 0 ? "PASS" : "FAIL");
//    // free(result_ft);
//    // free(result_std);

//     // 2. Case with nmemb = 0
//    // result_ft =  ft_calloc(0, 10);
//    // result_std = calloc(0, 10);
//    // printf("Test 2 - Zero nmemb: %s\n",
//    //        result_ft == result_std ? "PASS" : "FAIL");
//    // free(result_ft);
//    // free(result_std);

//     // 3. Case with size = 0
//    // result_ft =  ft_calloc(10, 0);
//    // result_std = calloc(10, 0);
//    // printf("Test 3 - Zero size: %s\n",
//    //        result_ft == result_std ? "PASS" : "FAIL");
//    // free(result_ft);
//    // free(result_std);

//     // 4. Large allocation within limits
//    // result_ft =  ft_calloc(1000, 1000);
//   //  result_std = calloc(1000, 1000);
//   //  printf("Test 4 - Large allocation: %s\n",
//   //         memory_compare(result_ft, result_std, 1000 * 1000) == 0 ? "PASS" : "FAIL");
//   //  free(result_ft);
//    // free(result_std);

//     // 5. Edge case with maximum possible size
//   //  result_ft =  ft_calloc(SIZE_MAX, 1);
//   //  result_std = calloc(SIZE_MAX, 1);
//    // printf("Test 5 - Maximum size: %s\n",
//    //        result_ft == NULL && result_std == NULL ? "PASS" : "FAIL");

//     // 6. Overflow case (should return NULL)
//     // result_ft =  ft_calloc(-1, -1);
//    //  result_std = calloc(-1, -1);
//      // printf("Test 6 - Overflow detection: %s\n",
//     //       result_ft == NULL && result_std == NULL ? "PASS" : "FAIL");

//     // 7. Boundary condition - maximum size where nmemb * size is just under overflow
//      result_ft =  ft_calloc(SIZE_MAX / 2, 2);
//      result_std = calloc(SIZE_MAX / 2, 2);
//      printf("Test 7 - Boundary condition just under overflow: %s\n",
//             memory_compare(result_ft, result_std, SIZE_MAX - 1) == 0 ? "PASS" : "FAIL");
//      free(result_ft);
//      free(result_std);

//     return 0;
// }


// /*int main()
// {
// 	if (ft_calloc(-1, -1) != NULL)
// 		printf("NOT NULL\n");
// 	else
// 		printf("NULL\n");
// 	if (calloc(-1, -1) != NULL)
// 		printf("NOT NULL\n");
// 	else
// 		printf("NULL\n");
// }*/
