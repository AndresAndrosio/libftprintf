/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:50:16 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:31:26 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return ((void *)(s + index));
		index++;
	}
	return ((void *)0);
}

// int main(void)
// {
// #include <stdio.h>
//     #include <string.h>
//     char str[] = "Hello World";
//     char str2[] = "42 Madrid";
//     char str3[] = "abcdef";
//     char str4[] = "";
//     char *original;
//     char *mine;

//     /* 1. Character at the beginning */
//     original = memchr(str, 'H', sizeof(str));
//     mine = ft_memchr(str, 'H', sizeof(str));
//     printf("original: %p, mine: %p\n", original, mine);
//     printf("Test 1 - beginning:     %s\n",
//         original == mine ? "OK" : "KO");

//     /* 2. Character in the middle */
//     original = memchr(str, 'W', sizeof(str));
//     mine = ft_memchr(str, 'W', sizeof(str));
//     printf("Test 2 - middle:        %s\n",
//         original == mine ? "OK" : "KO");

//     /* 3. Character at the end */
//     original = memchr(str, 'd', sizeof(str));
//     mine = ft_memchr(str, 'd', sizeof(str));
//     printf("Test 3 - end:           %s\n",
//         original == mine ? "OK" : "KO");

//     /* 4. Character does not exist */
//     original = memchr(str, 'x', sizeof(str));
//     mine = ft_memchr(str, 'x', sizeof(str));
//     printf("Test 4 - not found:     %s\n",
//         original == mine ? "OK" : "KO");

//     /* 5. Search for '\0' */
//     original = memchr(str, '\0', sizeof(str));
//     mine = ft_memchr(str, '\0', sizeof(str));
//     printf("Test 5 - null byte:     %s\n",
//         original == mine ? "OK" : "KO");

//     /* 6. n = 0 */
//     original = memchr(str, 'H', 0);
//     mine = ft_memchr(str, 'H', 0);
//     printf("Test 6 - n = 0:         %s\n",
//         original == mine ? "OK" : "KO");

//     /* 7. Character exists but outside n */
//     original = memchr(str, 'd', 5);
//     mine = ft_memchr(str, 'd', 5);
//     printf("Test 7 - outside n:     %s\n",
//         original == mine ? "OK" : "KO");

//     /* 8. Character inside n */
//     original = memchr(str, 'l', 4);
//     mine = ft_memchr(str, 'l', 4);
//     printf("Test 8 - inside n:      %s\n",
//         original == mine ? "OK" : "KO");

//     /* 9. Different string */
//     original = memchr(str2, 'M', sizeof(str2));
//     mine = ft_memchr(str2, 'M', sizeof(str2));
//     printf("Test 9 - str2:          %s\n",
//         original == mine ? "OK" : "KO");

//     /* 10. First character of another string */
//     original = memchr(str3, 'a', sizeof(str3));
//     mine = ft_memchr(str3, 'a', sizeof(str3));
//     printf("Test 10 - str3:         %s\n",
//         original == mine ? "OK" : "KO");

//     /* 11. Empty string */
//     original = memchr(str4, 'a', sizeof(str4));
//     mine = ft_memchr(str4, 'a', sizeof(str4));
//     printf("Test 11 - empty:        %s\n",
//         original == mine ? "OK" : "KO");

//     return (0);
// }
