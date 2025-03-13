#include "ft_gc.h"

// Thank you Ilies for this goated trick!
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

void	gc_add(void *ptr)
{
	t_gc		*gc;
	t_gc_node	*new_node;

	gc = get_gc();
	new_node = (t_gc_node *)malloc(sizeof(t_gc_node));
	if (!new_node)
		return (NULL);
	new_node->ptr = ptr;
	if (!gc->head)
	{
		new_node->next = NULL;
		gc->head = new_node;
		gc->tail = new_node;
	}
	else
	{
		new_node->next = (gc->head);
		gc->head = new_node;
	}
	gc->size++;
}

void	gc_remove(void *ptr)
{
	t_gc		*gc;
	t_gc_node	*current;
	t_gc_node	*prev;

	gc = get_gc();
	current = gc->head;
	prev = NULL;
	while (current)
	{
		if (current->ptr == ptr)
		{
			if (prev)
				prev->next = current->next;
			else
				gc->head = current->next;
			if (current == gc->tail)
				gc->tail = prev;
			free(current);
			gc->size--;
			return ;
		}
		prev = current;
		current = current->next;
	}
}
