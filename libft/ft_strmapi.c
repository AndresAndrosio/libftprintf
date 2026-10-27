/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:11 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 19:23:14 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*save_room(void)
{
	char	*vec;

	vec = malloc(1 * (sizeof(char)));
	if (!vec)
		return (NULL);
	return (vec);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i_s;
	char	*vec;
	char	*old_vec;
	size_t	i_copy;

	i_copy = -1;
	i_s = 0;
	vec = save_room();
	if (!s | !vec)
		return (NULL);
	while (s[i_s] != '\0')
	{
		old_vec = vec;
		vec = malloc((i_s + 2) * (sizeof(char)));
		while (++i_copy < i_s && vec != NULL)
			vec[i_copy] = old_vec[i_copy];
		free(old_vec);
		if (vec == NULL)
			return (NULL);
		i_copy = -1;
		vec[i_s] = f(i_s, s[i_s]);
		i_s++;
	}
	vec[i_s] = '\0';
	return (vec);
}

// char f(unsigned int i, char c)
// {
//     (void)i;
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }
// int main(void)
// {
//
//#include <stdio.h>
// #include <string.h>
//     struct test_case {
//         char const *input;
//         char (*func)(unsigned int, char);
//         char *expected_output;
//     };

//     struct test_case tests[] = {
//         {"hello", f, "HELLO"},
//         {"world", f, "WORLD"},
//         {"Test123", f, "TEST123"},
//         {NULL, NULL, NULL} // Sentinel value to mark the end of the array
//     };

//     for (int i = 0; tests[i].input != NULL; i++) {
//         char *result = ft_strmapi(tests[i].input, tests[i].func);
//         if (result == NULL) {
//             printf("Test %d failed: Memory allocation error\n", i);
//             continue ;
//         }
//         if (strcmp(result, tests[i].expected_output) == 0) {
//             printf("Test %d passed: %s -> %s\n", i, tests[i].input, result);
//         } else {
//             printf("Test %d failed: %s -> %s (expected: %s)\n", i,
// tests[i].input, result, tests[i].expected_output);
//         }
//         free(result);
//     }

//     return (0);
// }