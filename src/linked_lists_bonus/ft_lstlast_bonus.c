/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:37:26 by kixik             #+#    #+#             */
/*   Updated: 2024/11/25 16:43:32 by kixik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_node	*ft_lstlast(t_list_node *lst)
{
	t_list_node	*last;

	last = NULL;
	if (!lst)
		last = lst;
	else
	{
		while (lst)
		{
			last = lst;
			lst = lst->next;
		}
	}
	return (last);
}
