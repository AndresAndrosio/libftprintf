/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:37 by arozados          #+#    #+#             */
/*   Updated: 2026/10/13 14:54:37 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main(){
//     struct {int param;} tests[]= {
//         {'a'},
//         {'z'},
//         {'A'},
//         {'Z'},
//         {'0'},
//         {'9'},
//         {' '},
//         {'!'},
//         {127},
//     };
//     #include <stdio.h>
//     #include <ctype.h>
//     for(int i = 0; i < sizeof(tests)/sizeof(tests[0]); i++){
//         int result=tolower(tests[i].param);
//         int result_ft=ft_tolower(tests[i].param);
//         printf("param:%d ", tests[i].param);
//         printf(" Result_org:%d ", result);
//         printf(" Result_ft:%d", result_ft);
//         if(result_ft==result)
//             printf("\033[32mOK\033[0m\n");
//         else
//             printf("\033[31mFALLO\033[0m\n");
//     }

//     return (1);
// }