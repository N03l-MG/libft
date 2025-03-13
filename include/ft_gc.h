/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:43:43 by nmonzon           #+#    #+#             */
/*   Updated: 2025/03/12 17:37:37 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GC_H
# define FT_GC_H

# include "libft.h"

typedef struct s_gc_node
{
	void				*ptr;
	struct s_gc_node	*next;
}	t_gc_node;

typedef struct s_gc
{
	t_gc_node		*head;
	t_gc_node		*tail;
	size_t			size;
}	t_gc;

t_gc	*get_gc(void);
t_gc	*gc_init(void);
void	gc_add(void *ptr);
void	gc_remove(void *ptr);

void	*gc_malloc(size_t size);
void	gc_free(void *ptr);
void	gc_collect(void);

#endif
