/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:51:12 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 18:42:07 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	index;
	int		is_negative;
	int		result;

	result = 0;
	is_negative = 0;
	index = 0;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == ' ')
		index++;
	if (nptr[index] == '-')
		is_negative = 1;
	if (nptr[index] == '-' || nptr[index] == '+')
		index++;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result = result * 10 + ((nptr[index] - '0'));
		index++;
	}
	if (is_negative)
		return (result * -1);
	return (result);
}
