/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:36:20 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/05 17:08:13 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{		
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{	
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res * sign;
}
// #include <stdio.h>
// #include <stdlib.h>

// // Declaration of your custom ft_atoi function
// int ft_atoi(const char *str);

// void test_atoi(const char *test_case) {
//     int expected = atoi(test_case);
//     int result = ft_atoi(test_case);
    
//     // Print the test case, expected result, and actual result
//     printf("Test case: \"%s\"\n", test_case);
//     printf("Expected: %d, ft_atoi: %d\n", expected, result);
//     printf("-------------------------------------------------\n");
// }

// int main() {
//     // Array of test cases
//     const char *test_cases[] = {
//         "42",                  // Valid positive integer
//         "-42",                 // Valid negative integer
//         "   42",              // Leading spaces
//         "42   ",              // Trailing spaces
//         "2147483648",         // Overflow (INT_MAX + 1)
//         "-2147483649",        // Underflow (INT_MIN - 1)
//         "abc42",              // Non-numeric characters
//         "",                    // Empty string
//         "   ",                // Only spaces
//         "00042",              // Leading zeros
//         "42abc",              // Mixed characters
//         "0x1A",               // Hexadecimal input (not valid for atoi)
//         "99999999999999999999", // Very large number
//         "-99999999999999999999", // Very large negative number
//         "   -+42",            // Invalid input
//         NULL // Sentinel value to mark the end
//     };

//     // Run the tests
//     for (int i = 0; test_cases[i] != NULL; i++) {
//         test_atoi(test_cases[i]);
//     }

//     return 0;
// }

// /*int main(){
//     printf("\n%d",ft_atoi("2147483647"));
//     printf("\n%d",atoi("2147483647"));
//     printf("\n%d",ft_atoi("2147483648"));
//     printf("\n%d",atoi("2147483648"));
//     printf("\n-----------------");
//     printf("\n%d",ft_atoi("-2147483648"));
//     printf("\n%d",atoi("-2147483648"));
//     printf("\n%d",ft_atoi("-2147483649"));
//     printf("\n%d",atoi("-2147483649"));
//     printf("\n---------------------");
//     printf("\n%d",ft_atoi("9223372036854775807"));
//     printf("\n%d",atoi("9223372036854775807"));
//     printf("\n%d",ft_atoi("9223372036854775808"));//i am abov long long int max retun 0
//     printf("\n%d",atoi("9223372036854775808"));//i am abov long long int max retun -1
//     printf("\n---------------------");
//     printf("\n%d",ft_atoi("-9223372036854775808"));
//     printf("\n%d",atoi("-9223372036854775808"));
//     printf("\n%d",ft_atoi("-9223372036854775809"));//i am under long long int min return -1
//     printf("\n%d",atoi("-9223372036854775809"));// i am under long long int min return 0
//     printf("\n---------------------");
//     printf("\n%d",ft_atoi("-922337203685477580899"));
//     printf("\n%d",atoi("-922337203685477580899"));
//     printf("\n%d",ft_atoi("922337203685477580999"));
//     printf("\n%d",atoi("922337203685477580999"));



// }*/
