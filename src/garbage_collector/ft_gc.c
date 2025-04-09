/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:44:55 by kixik             #+#    #+#             */
/*   Updated: 2025/03/13 18:04:16 by kixik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gc.h"

void	*gc_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	gc_add(ptr);
	return (ptr);
}

void	gc_free(void *ptr)
{
	if (!ptr)
		return ;
	gc_remove(ptr);
	free(ptr);
}

void	gc_collect(void)
{
	t_gc		*gc;
	t_gc_node	*current;
	t_gc_node	*next;
	int			length;
	int			i;

	gc = get_gc();
	current = gc->head;
	length = gc->size;
	i = -1;
	while (++i < length && current)
	{
		next = current->next;
		free(current->ptr);
		free(current);
		current = NULL;
		current = next;
	}
	gc = NULL;
}
