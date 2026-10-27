/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:52:14 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:10:34 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_item;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		current_item = (*lst);
		while (current_item->next != NULL)
		{
			current_item = current_item->next;
		}
		current_item->next = new;
	}
}
