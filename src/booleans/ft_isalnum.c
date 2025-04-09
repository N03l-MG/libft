/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:59:22 by kixik             #+#    #+#             */
/*   Updated: 2024/11/25 16:43:32 by kixik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks if c is within the ascii range of alphanumerics

bool	ft_isalnum(int c)
{
	if (c == '\0')
		return (false);
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (true);
	return (false);
}
