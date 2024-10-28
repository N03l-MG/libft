/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:02:55 by nmonzon           #+#    #+#             */
/*   Updated: 2024/10/28 11:32:24 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// Returns the differnce in ascii between the first differing charater
// of s and s2, up until the point n.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int		length;
	int		r;

	str1 = "ABCDEF";
	str2 = "abcdef";
	length = 8;
	r = ft_strncmp(str1, str2, length);
	printf("%d", r);
	return (0);
}
*/
