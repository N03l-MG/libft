/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:02:26 by kixik             #+#    #+#             */
/*   Updated: 2024/11/25 16:43:32 by kixik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Uses concatenation to add a string onto the end of another. Allocates total
// size to the new joined string.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*s_joined;

	l = ft_strlen(s1) + ft_strlen(s2);
	s_joined = (char *)gc_malloc(l + 1);
	if (!s_joined)
		return (NULL);
	s_joined[0] = '\0';
	ft_strcat(s_joined, s1);
	ft_strcat(s_joined, s2);
	return (s_joined);
}
