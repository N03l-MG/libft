/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:44:24 by nmonzon           #+#    #+#             */
/*   Updated: 2024/10/17 18:41:26 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_and_check(char *s, int *retval, int length)
{
	if (write(1, s, length) == -1)
	{
		*retval = -1;
		return ;
	}
	*retval += length;
}

static char	*hex_to_upper(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'f')
			s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}

void	handle_hex_lower(unsigned int hexl, int *retval)
{
	char	*hex_string;
	int		length;

	if (hexl == 0)
	{
		write_and_check("0", retval, 1);
		return ;
	}
	hex_string = hex_to_string(hexl);
	if (!hex_string)
	{
		(*retval) = -1;
		return ;
	}
	length = ft_strlen(hex_string);
	write_and_check(hex_string, retval, length);
	free(hex_string);
}

void	handle_hex_upper(unsigned int hexu, int *retval)
{
	char	*hex_string;
	int		length;

	if (hexu == 0)
	{
		write_and_check("0", retval, 1);
		return ;
	}
	hex_string = hex_to_string(hexu);
	if (!hex_string)
	{
		(*retval) = -1;
		return ;
	}
	hex_string = hex_to_upper(hex_string);
	length = ft_strlen(hex_string);
	write_and_check(hex_string, retval, length);
	free(hex_string);
}
