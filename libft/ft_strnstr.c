/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:25 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:16:07 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index_little;
	size_t	index_big;

	index_big = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[index_big] != '\0' && index_big < len)
	{
		index_little = 0;
		while (little[index_little] != '\0')
		{
			if (little[index_little] != big[index_big + index_little]
				|| (index_little + index_big > len - 1))
				break ;
			index_little++;
			if (little[index_little] == '\0')
				return ((char *)&(big[index_big]));
		}
		index_big++;
	}
	return ((void *)0);
}

// char	*reference_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	if (*little == '\0')
// 		return ((char *)big);

// 	i = 0;
// 	while (big[i] && i < len)
// 	{
// 		j = 0;
// 		while (big[i + j] && little[j]
// 			&& i + j < len
// 			&& big[i + j] == little[j])
// 			j++;
// 		if (little[j] == '\0')
// 			return ((char *)&big[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// int	main(void)
// {
//     #include <string.h>
//     struct test_case {
//         const char *big;
//         const char *little;
//         size_t len;
//     };

//     struct test_case tests[] = {
//         {"Hello World", "World", 11},
//         {"Hello World", "Hello", 5},
//         {"Hello World", "o W", 7},
//         {"Hello World", "abc", 11},
//         {"Hello World", "", 11},
//         {"Hello World", "World", 5},
//     };

//     for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
//         char *original = reference_strnstr(tests[i].big, tests[i].little,
//		tests[i].len);
//         char *mine = ft_strnstr(tests[i].big, tests[i].little,
//		tests[i].len);

//         if (original != mine) {
//             printf("Test %d KO: original=%p, mine=%p\n", i + 1, original,
//	mine);
//         } else {
//             printf("Test %d OK: original=%p, mine=%p\n", i + 1, original,
//	mine);
//         }
//     }

//     return (0);
// }
