/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:50:03 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 16:57:04 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}

// int main() {
//     #include <stdio.h>
//     #include <string.h>

//     char src[50] = "Hello, World!";
//     char dest[50];

//     printf("Source string: %s\n", src);

//     ft_memcpy(dest, src, 2);
//     printf("After ft_memcpy: %s\n", dest);

//     memcpy(dest, src, 2);
//     printf("After memcpy: %s\n", dest);

//     return (0);
// }