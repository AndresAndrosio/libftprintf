/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 04:39:04 by arozados          #+#    #+#             */
/*   Updated: 2026/10/29 09:30:14 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	parse(char const character, va_list arguments)
{
	size_t	len;

	len = 1;
	if ('c' == character)
		len = parse_char_and_print(va_arg(arguments, int));
	else if ('s' == character)
		len = parse_string_and_print(va_arg(arguments, char *));
	else if ('p' == character)
		len = parse_ref(va_arg(arguments, void *));
	else if ('d' == character || 'i' == character)
		len = ft_itoa_and_print(va_arg(arguments, int));
	else if ('u' == character)
		len = ft_itoau_and_print((unsigned int)va_arg(arguments, unsigned int));
	else if ('x' == character || 'X' == character)
		len = parse_to_hex_and_print(va_arg(arguments, unsigned int),
				'X' == character, 0);
	else if ('%' == character)
		len = parse_string_and_print("%");
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	arguments;
	char	*char_to_print;
	size_t	len;

	if (!format)
		return (-1);
	len = 0;
	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
			len += parse(*(++format), arguments);
		else
		{
			char_to_print = (char *)format;
			write(1, char_to_print, 1);
			len += 1;
		}
		format++;
	}
	va_end(arguments);
	return (len);
}
