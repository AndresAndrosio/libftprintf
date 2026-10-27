/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:56:38 by arozados          #+#    #+#             */
/*   Updated: 2026/10/27 14:57:13 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ltoprint(long number)
{
	char			*hex_base;
	char			hex_digits[16];
	size_t			len;
	size_t			i;
	unsigned long	n;

	hex_base = "0123456789abcdef";
	n = (unsigned long)number;
	i = 0;
	len = 0;
	while (n != 0)
	{
		hex_digits[i++] = hex_base[n % 16];
		n /= 16;
	}
	while (i > 0)
	{
		write(1, &hex_digits[--i], 1);
		len++;
	}
	return (len);
}

size_t	parse_ref(void *ref)
{
	if (ref == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (2 + ltoprint((long)ref));
}
