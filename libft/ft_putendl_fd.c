/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:49:23 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 15:36:21 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	size_s;

	if (!s)
		return ;
	size_s = 0;
	while (s[size_s] != '\0')
		size_s++;
	write(fd, s, size_s);
	write(fd, "\n", 1);
}
