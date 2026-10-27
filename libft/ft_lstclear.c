/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:52:24 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:11:03 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_item;
	t_list	*element_to_erase;

	if (lst && *lst && del)
	{
		next_item = *lst;
		while (next_item->next != NULL)
		{
			element_to_erase = next_item;
			next_item = element_to_erase->next;
			del(element_to_erase->content);
			free(element_to_erase);
		}
		element_to_erase = next_item;
		del(element_to_erase->content);
		free(element_to_erase);
		*lst = NULL;
	}
}
