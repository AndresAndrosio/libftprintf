/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:10 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:01:13 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	size_s;

	if (!s)
		return ;
	size_s = 0;
	while (s[size_s] != '\0')
		size_s++;
	write(fd, s, size_s);
}

// int main(void)
// {

//     #include <stdio.h>
//     #include <string.h>
//     struct test_case {
//         char *input;
//         int fd;
//         char *expected_output;
//     };

//     struct test_case tests[] = {
//         {"Hello, World!", 1, "Hello, World!"},
//         {"42", 1, "42"},
//         {"", 1, ""},
//         {"This is a longer string to test the ft_putstr_fd function.", 1,
// "This is a longer string to test the ft_putstr_fd function."
// }
// ,
// 	//         {"Special characters: !@#$%^&*()_+-=[]{}|;':\",./<>?", 1,
// 	"Special characters: !@#$%^&*()_+-=[]{}|;':\",./<>?"
// }
// ,
// 	//     };

// 	//     for (long unsigned int i = 0; i < sizeof(tests)
// 	/ sizeof(tests[0]); i++)
// {
// 	//         printf("Test %ld: input=\"%s\", fd=%d\n", i + 1, tests[i].input,
// 	tests[i].fd);
// 	//         ft_putstr_fd(tests[i].input, tests[i].fd);
// 	//         printf("\n");
// 	//     }

// 	//     return (0);
// 	// }