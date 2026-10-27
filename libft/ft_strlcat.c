/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:51 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 18:59:43 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = 0;
	while (dst_size < dsize && dst[dst_size])
		dst_size++;
	src_size = 0;
	while (src[src_size])
		src_size++;
	if (dsize <= dst_size)
		return (dsize + src_size);
	i = 0;
	while (src[i] && dst_size + i < dsize - 1)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
