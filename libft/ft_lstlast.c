/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:52:46 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:11:19 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_item;

	if (lst == NULL)
		return (NULL);
	current_item = lst;
	while (current_item->next != NULL)
		current_item = current_item->next;
	return (current_item);
}
