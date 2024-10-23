/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:27:24 by nmonzon           #+#    #+#             */
/*   Updated: 2024/10/22 15:36:53 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

// Incredibly ironic that the in the "why" section of the norm the main reason
// stated is that it helps code readability and ease of understanding, when
// precisely because of the line limit I had to turn perfectly legible and
// valid piece of code into an unreadable mess of struct value accessing that
// takes three times the effort to explain to anyone reviweing the code.
// Having rules is good... enforcing them when they become a hinderance is
// madness and against the very priciples you claim to stand by.
// Thats my honest thoughs, take it or leave it, 42.
typedef struct s_buffer
{
	size_t	bytes_read;
	char	*buffer;
	size_t	i;
}	t_buffer;

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*join_range(char *s1, char *s2, size_t start, size_t end);

#endif
