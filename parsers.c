/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:58:32 by arozados          #+#    #+#             */
/*   Updated: 2026/10/29 09:49:20 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	parse_to_hex_and_print(long number, int is_upper, int have_prefix)
{
	char	*hex_base;
	long	i_print;
	long	hex;
	size_t	len;

	len = 0;
	if (is_upper)
		hex_base = "0123456789ABCDEF";
	else
		hex_base = "0123456789abcdef";
	hex = number / 16;
	i_print = number % 16;
	if (hex != 0)
		len += parse_to_hex_and_print(hex, is_upper, have_prefix);
	if (have_prefix && hex == 0)
	{
		write(1, "0x", 2);
		len += 2;
	}
	write(1, &hex_base[i_print], 1);
	len += 1;
	return (len);
}

size_t	ft_itoau_and_print(unsigned int num)
{
	int		new_digit;
	char	a;
	size_t	len;

	len = 1;
	new_digit = num % 10;
	a = (char)(new_digit + '0');
	if (num / 10)
	{
		len += ft_itoau_and_print(num / 10);
	}
	write(1, &a, 1);
	return (len);
}

size_t	ft_itoa_and_print(int num)
{
	char	*num_str;
	size_t	len;

	num_str = ft_itoa(num);
	len = ft_strlen(num_str);
	write(1, num_str, len);
	free(num_str);
	num_str = NULL;
	return (len);
}

size_t	parse_char_and_print(int number)
{
	char	character;

	character = (char)number;
	write(1, &character, 1);
	return ((size_t)1);
}

size_t	parse_string_and_print(char *string)
{
	size_t	len;

	len = 6;
	if (!string)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(string);
	write(1, string, len);
	return (len);
}
