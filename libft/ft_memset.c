/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:01:21 by nmonzon           #+#    #+#             */
/*   Updated: 2024/10/11 18:08:59 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Like bzero, but sets specified range in memory to value c.

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}
