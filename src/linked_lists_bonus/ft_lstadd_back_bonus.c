/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:37:08 by nmonzon           #+#    #+#             */
/*   Updated: 2024/11/25 16:43:32 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list_node **lst, t_list_node *new)
{
	t_list_node	*previous;
	t_list_node	*current;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	previous = NULL;
	while (current)
	{
		previous = current;
		current = current->next;
	}
	previous->next = new;
}
