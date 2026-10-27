/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:51:27 by arozados          #+#    #+#             */
/*   Updated: 2026/10/20 11:16:52 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*result;
	size_t	index;

	if (n == 0 || size == 0)
		return ((void *)malloc(0));
	if (size > (size_t) -1 / n)
		return ((void *)0);
	result = malloc(n * size);
	if (!result)
		return (NULL);
	index = 0;
	while (index < n * size && result != (void *)0)
	{
		((char *)result)[index] = 0;
		index++;
	}
	return (result);
}
