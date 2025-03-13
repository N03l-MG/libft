/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:04:54 by nmonzon           #+#    #+#             */
/*   Updated: 2025/03/13 18:06:21 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s);
	if (len > n)
		len = n;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s, len + 1);
	return (result);
}
