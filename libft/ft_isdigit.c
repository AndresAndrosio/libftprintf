/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:51:57 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 14:51:57 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main() {
//     #include <stdio.h>

//     printf("0:%d\n",ft_isdigit('0'));

//     printf("9:%d\n",ft_isdigit('9'));
//     printf("3:%d\n",ft_isdigit('3'));

//     printf("A:%d\n",ft_isdigit('A'));
//     printf(" :%d\n",ft_isdigit(' '));
//     printf("\\0:%d\n",ft_isdigit('\0'));
//     return (0);
// }