/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:19 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 18:04:44 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		result;

	index = 0;
	if (n == 0)
		return (0);
	while (index < n && s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index] || index == n - 1)
		{
			result = ((unsigned char)s1[index]) - ((unsigned char)s2[index]);
			break ;
		}
		index++;
	}
	if (s1[index] == '\0' || s2[index] == '\0')
		result = ((unsigned char)s1[index]) - ((unsigned char)s2[index]);
	return (result);
}

// int main(){
// 	#include <stdio.h>
// 	#include <string.h>
//     struct {
//         char *s1;
//         char *s2;
// 		size_t size;
//     } tests[] = {
//         {"AAAAAA1", "AAAAAA2",3},
//         {"Hello", "World",2},
//         {"Hello", "Hell",0},
//         {"Hell", "Hello",6},
//         {"Hello", "Hello, World!",10},
//         {"", "",2},
//         {"", "Non-empty",1},
//         {"Non-empty", "",1},
//     };
//     for (unsigned long i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
//         int result = ft_strncmp(tests[i].s1, tests[i].s2,tests[i].size);
//         int result_org = strncmp(tests[i].s1, tests[i].s2, tests[i].size);
//         if (result == result_org) {
//         printf("\033[0;32mTest %ld passed: s1: \"%s\",
// s2: \"%s\"\033[0m\n",
//                    i + 1, tests[i].s1 ? tests[i].s1 : "NULL",
// 	tests[i].s2 ? tests[i].s2 : "NULL");
//         } else {
//   printf("\033[0;31mTest %ld failed: s1: \"%s\", s2: \"%s\",
// 	Expected: %d, Got: %d\033[0m\n",
//                    i + 1, tests[i].s1 ? tests[i].s1 : "NULL",
// 	tests[i].s2 ? tests[i].s2 : "NULL",
//                    result_org, result);
//         }
//     }
//     return (0);
// }