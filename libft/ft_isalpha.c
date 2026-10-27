/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:51:46 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 14:51:48 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int main() {
//     #include <stdio.h>

//     printf("A:%d",ft_isalpha('A'));

//     printf("f:%d\n",ft_isalpha('f'));
//     printf("Z:%d\n",ft_isalpha('Z'));
//     printf("a:%d\n",ft_isalpha('a'));
//     printf("j:%d\n",ft_isalpha('j'));
//     printf("z:%d\n",ft_isalpha('z'));
//     printf(" :%d\n",ft_isalpha(' '));
//     printf("\\0:%d\n",ft_isalpha('\0'));
//     return (0);
// }