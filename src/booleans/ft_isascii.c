/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:59:36 by nmonzon           #+#    #+#             */
/*   Updated: 2024/11/25 16:43:32 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks if c is a valid ascii value

bool	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (true);
	return (false);
}
