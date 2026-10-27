/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:44 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 18:49:43 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenght1;
	size_t	lenght2;
	char	*result;
	size_t	index;

	lenght1 = 0;
	lenght2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[lenght1] != '\0')
		lenght1++;
	while (s2[lenght2] != '\0')
		lenght2++;
	result = malloc((lenght1 + lenght2 + 1) * sizeof(char));
	if (!result)
		return ((void *)0);
	index = -1;
	while (++index < lenght1)
		result[index] = s1[index];
	index--;
	while (++index <= (lenght1 + lenght2))
		result[index] = s2[index - lenght1];
	result[index] = '\0';
	return (result);
}
