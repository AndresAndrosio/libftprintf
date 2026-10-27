/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:50:36 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:11:50 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	vec_size;
	t_list			*current_node;

	if (lst == NULL)
		return (0);
	vec_size = 1;
	current_node = lst;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
		vec_size++;
	}
	return (vec_size);
}
