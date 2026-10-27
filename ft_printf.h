/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:48:49 by arozados          #+#    #+#             */
/*   Updated: 2026/10/27 14:57:29 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(char const *format, ...);
size_t	parse_to_hex_and_print(long number, int is_upper, int have_prefix);
size_t	ft_itoau_and_print(unsigned int num);
size_t	ft_itoa_and_print(int num);
size_t	parse_char_and_print(int number);
size_t	parse_string_and_print(char *string);
size_t	parse_ref(void *ref);

#endif
