/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:52:07 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 18:12:57 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	result;

	result = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	int		len;
	int		i;

	num = n;
	len = count_digit(num) + (n < 0);
	if (n < 0)
		num = -num;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	result[len] = '\0';
	i = len - 1;
	while (num > 0)
	{
		result[i--] = (char)((num % 10) + '0');
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
