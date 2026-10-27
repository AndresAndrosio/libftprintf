/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:52:03 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 15:58:35 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main() {
//     #include <stdio.h>

//     printf("0:%d\n",ft_isprint('0'));

//     printf("9:%d\n",ft_isprint('9'));
//     printf("3:%d\n",ft_isprint('3'));

//     printf("A:%d\n",ft_isprint('A'));
//     printf(" :%d\n",ft_isprint(' '));
//     printf("\\0:%d\n",ft_isprint('\0'));
//     return (0);
// }
