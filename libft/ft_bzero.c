/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:51:17 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 18:41:43 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = '\0';
		s++;
		i++;
	}
}

// int main() {
//     #include <stdio.h>
//     #include <string.h>

//     char str[50] = "Hello, World!";
//     printf("Original string: %s\n", str);

//     ft_bzero(&str[2], 5);
//     printf("After ft_bzero: %s\n", str);

//     return (1);
// }