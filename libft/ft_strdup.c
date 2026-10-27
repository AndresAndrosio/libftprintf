/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:30 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 18:34:43 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	num_s;
	size_t	index;
	char	*new_vec;

	num_s = 0;
	index = 0;
	while (s[num_s] != '\0')
		num_s++;
	new_vec = malloc((num_s + 1) * sizeof(char));
	if (new_vec == NULL)
		return (NULL);
	while (index <= num_s)
	{
		new_vec[index] = s[index];
		index++;
	}
	return (new_vec);
}

// int main(void)
// {
//     #include <stdio.h>
//     #include <string.h>

//     struct test_case {
//         const char *input;
//     };

//     struct test_case tests[] = {
//         {"Hello, World!"},
//         {"42"},
//         {""},
//         {"This is a longer string to test the ft_strdup function."},
//         {"Special characters: !@#$%^&*()_+-=[]{}|;':\",./<>?"},
//     };

//     for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
//         char *original = strdup(tests[i].input);
//         char *mine = ft_strdup(tests[i].input);

//         if (strcmp(original, mine) != 0) {
//             printf("Test %d KO: input=\"%s\", original=\"%s\",
// mine=\"%s\"\n", i + 1, tests[i].input, original, mine);
//         } else {
//             printf("Test %d OK: input=\"%s\", original=\"%s\",
// mine=\"%s\"\n", i + 1, tests[i].input, original, mine);
//         }

//         free(original);
//         free(mine);
//     }

//     return (0);
// }