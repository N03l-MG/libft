/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kixik   <github.com/kixikCodes>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:32:15 by kixik             #+#    #+#             */
/*   Updated: 2024/11/25 14:34:08 by kixik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_decimals(char *str)
{
	int	count;

	count = 0;
	while (*str && *str != '.')
		str++;
	if (!*str)
		return (0);
	str++;
	while (*str && ft_isdigit(*str) == 1)
	{
		count++;
		str++;
	}
	return (count);
}

float	ft_atof(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
	{
		if (str[i] != '.')
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result / pow(10, count_decimals(str)));
}
