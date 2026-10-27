/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:51:52 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 15:55:18 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main() {
//     #include <stdio.h>

//     printf("f:%d\n",isascii('f'));
//     printf("Z:%d\n",isascii('Z'));
//     printf("a:%d\n",isascii('a'));
//     printf("j:%d\n",isascii('j'));
//     printf("z:%d\n",isascii('z'));
//     printf("\\0:%d\n",isascii('\0'));
//     printf("0(int):%d\n",isascii(0));
//     printf("128 (int):%d\n",isascii(128));
//     return (0);
// }