/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:02:10 by kixik             #+#    #+#             */
/*   Updated: 2025/03/13 18:05:29 by kixik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Dupclicates a string by allocating memory to a new one and copying to it.

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	dup = (char *)gc_malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s1);
	return (dup);
}
