/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:00:01 by nmonzon           #+#    #+#             */
/*   Updated: 2024/10/28 11:29:51 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// Checks if c is within the ascii range of printable charaters

int	ft_isprint(int c)
{
	if (c == '\0')
		return (0);
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
