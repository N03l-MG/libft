/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:37:15 by kixik             #+#    #+#             */
/*   Updated: 2024/11/25 16:43:32 by kixik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list_node **lst, void (*del)(void *))
{
	t_list_node	*temp;

	while (*lst)
	{
		del((*lst)->content);
		temp = (*lst)->next;
		free (*lst);
		*lst = temp;
	}
	*lst = NULL;
}
