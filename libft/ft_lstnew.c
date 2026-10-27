/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:50:47 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:11:36 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_vec;

	new_vec = malloc(sizeof(t_list));
	if (!new_vec)
		return (NULL);
	new_vec->content = content;
	new_vec->next = NULL;
	return (new_vec);
}
