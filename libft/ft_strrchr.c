/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:30 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:29:46 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size_s;
	size_t	index;

	size_s = 0;
	while (s[size_s] != '\0')
		size_s++;
	index = size_s;
	while (index != 0)
	{
		if (s[index] == (char)c)
			return ((char *)(&s[index]));
		index--;
	}
	if (index == 0 && s[index] == (char)c)
		return ((char *)(&s[index]));
	return ((void *)0);
}

// int main (){
//     #include <string.h>
//     #include <stdio.h>
//     struct { const char *s; int c; } tests[] = {
//         {"Hello, WorlWd!", 'W'},
//         {"Hello, World!", 'o'},
//         {"Hello, World!", 'z'},
//         {"", 'a'},
//         {NULL, 'a'}
//     };
//     for(int test_number; test_number<
// sizeof(tests)/sizeof(tests[0]); test_number++){
//         if (ft_strrchr(tests[0].s, tests[0].c) == strrchr(tests[0].s,
// 		tests[0].c)) {
// //             printf("\033[0;32mTest %d passed: Input: \"%s\",
// 	Character: '%c'\033[0m\n",
// //                 test_number,tests[0].s ? tests[0].s : "NULL", tests[0].c);
// //             } else {
// //                 printf("\033[0;31mTest %d failed: Input: \"%s\",
// 	Character: '%c', Expected: \"%s\", Got: \"%s\"\033[0m\n",
// //                     test_number,tests[0].s ? tests[0].s : "NULL",
// 	tests[0].c,
// //                     strrchr(tests[0].s, tests[0].c) ? strrchr(tests[0].s,
// 	tests[0].c) : "NULL",
// //                     ft_strrchr(tests[0].s,
// 	tests[0].c) ? ft_strrchr(tests[0].s, tests[0].c) : "NULL");
//                 }
//     }
//     return (0);
// }