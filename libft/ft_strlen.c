/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:05 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 19:00:02 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned long	char_amount;

	char_amount = 0;
	while (s[char_amount] != '\0')
		char_amount++;
	return (char_amount);
}

// int main() {
//     #include <stdio.h>

//     const char *str = "Hello, World!";
//     const int length = ft_strlen(str);
//     printf("Length of '%s' is: %d\n", str, length);

//     const int length1 = ft_strlen("hola");
//     printf("Length of '%s' is: %d\n", "hola", length1);
//     const int length2 = ft_strlen("");

//     printf("Length of '%s' is: %d\n", "", length2);

//     return (0);
// }
