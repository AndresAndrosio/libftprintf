/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:59 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 19:00:19 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src, size_t dsize)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (src[result] != '\0')
		result++;
	if (dsize != 0)
	{
		while (src[i] != '\0' && i < dsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		if (dsize > 0)
			dst[i] = '\0';
	}
	return (result);
}
