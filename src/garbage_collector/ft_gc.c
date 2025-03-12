/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:44:55 by nmonzon           #+#    #+#             */
/*   Updated: 2025/03/12 17:41:19 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gc.h"

// Basic Garbage Collector implementation (makes memory management a breeze)

t_gc	*get_gc(void)
{
	static t_gc	gc = {0};

	return (&gc);
}

t_gc	*gc_init(void)
{
	t_gc	*gc;

	gc = get_gc();
	gc->head = NULL;
	gc->tail = NULL;
	gc->size = 0;
	return (gc);
}

// TODO: fix everything lol

void	*gc_malloc(size_t size, t_gc *g_gc)
{
	t_gc_node	*new_node;
	void		*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	new_node = malloc(sizeof(t_gc_node));
	if (!new_node)
	{
		free(ptr);
		return (NULL);
	}
	new_node->ptr = ptr;
	new_node->size = size;
	new_node->next = g_gc->head;
	g_gc->head = new_node;
	g_gc->total_allocations++;
	g_gc->total_memory += size;
	return (ptr);
}

void	gc_free(void *ptr, t_gc *g_gc)
{
	t_gc_node	*current;
	t_gc_node	*prev;

	if (!ptr)
		return ;
	current = g_gc->head;
	prev = NULL;
	while (current)
	{
		if (current->ptr == ptr)
		{
			if (prev)
				prev->next = current->next;
			else
				g_gc->head = current->next;
			g_gc->total_allocations--;
			g_gc->total_memory -= current->size;
			free(current->ptr);
			free(current);
			return ;
		}
		prev = current;
		current = current->next;
	}
}

void	gc_collect()
{
	t_gc_node	*current;
	t_gc_node	*next;
	t_gc

	current = g_gc->head;
	while (current)
	{
		next = current->next;
		free(current->ptr);
		free(current);
		current = next;
	}
	gc_init(g_gc);
}
