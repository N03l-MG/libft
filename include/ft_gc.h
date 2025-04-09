/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:43:43 by kixik             #+#    #+#             */
/*   Updated: 2025/03/13 16:09:34 by kixik            ###   ########.fr       */
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

#endif
