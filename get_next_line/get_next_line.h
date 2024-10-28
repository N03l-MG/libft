/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:27:24 by nmonzon           #+#    #+#             */
/*   Updated: 2024/10/28 11:28:22 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "../libft.h"
// # include <stdio.h>
// # include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_buffer
{
	size_t	bytes_read;
	char	*buffer;
	size_t	i;
}	t_buffer;

size_t	ft_strlen(const char *s);
char	*join_range(char *s1, char *s2, size_t start, size_t end);

#endif
