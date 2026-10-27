/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:51:37 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 14:51:37 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

// int main() {
//     #include <stdio.h>

//     printf("A:%d\n",ft_isalnum('A'));

//     printf("f:%d\n",ft_isalnum('f'));
//     printf("Z:%d\n",ft_isalnum('Z'));
//     printf("a:%d\n",ft_isalnum('a'));
//     printf("j:%d\n",ft_isalnum('j'));
//     printf("z:%d\n",ft_isalnum('z'));
//     printf("0:%d\n",ft_isalnum('0'));
//     printf("9:%d\n",ft_isalnum('9'));
//     printf("3:%d\n",ft_isalnum('3'));
//     printf("A:%d\n",ft_isalnum('A'));

//     printf(" :%d\n",ft_isalnum(' '));
//     printf("\\0:%d\n",ft_isalnum('\0'));
//     return (0);
// }