/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:35 by arozados          #+#    #+#             */
/*   Updated: 2026/10/14 17:00:05 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i_s;

	i_s = 0;
	while (s[i_s] != '\0')
	{
		f(i_s, s + i_s);
		i_s++;
	}
}

// void to_uppercase(unsigned int i, char *c) {
//         (void)i; // Unused parameter
//         if (*c >= 'a' && *c <= 'z') {
//             *c = *c - 32; // Convert to uppercase
//         }
// }
// int main(void)
// {
//     #include <stdio.h>
//     #include <string.h>
//     struct test_case {
//         char *input;
//         void (*func)(unsigned int, char*);
//         char *expected_output;
//     };
//     struct test_case tests[] = {
//         {"hello", to_uppercase, "HELLO"},
//         {"world", to_uppercase, "WORLD"},
//         {"Test123", to_uppercase, "TEST123"},
//         {NULL, NULL, NULL} // Sentinel value to mark the end of the array
//     };
//     for (int i = 0; tests[i].input != NULL; i++) {
//         char *input_copy = strdup(tests[i].input);
// Create a copy of the input string
//         ft_striteri(input_copy, tests[i].func);
//         if (strcmp(input_copy, tests[i].expected_output) == 0) {
//             printf("Test %d passed: %s -> %s\n", i, tests[i].input,
// input_copy);
// //         } else {
// //             printf("Test %d failed: %s -> %s (expected: %s)\n", i,
// tests[i].input, input_copy, tests[i].expected_output);
// //         }
// //         free(input_copy); // Free the allocated memory for the copy
// //     }

// //     return (0);
// // }