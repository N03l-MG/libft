/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:00:30 by nmonzon           #+#    #+#             */
/*   Updated: 2024/10/28 11:28:36 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft.h"
# include <stdarg.h>
# include <stdint.h>

void	handle_character(int c, int *retval);
void	handle_string(char *s, int *retval);
void	handle_pointer(void *p, int *retval);
void	handle_integer(int n, int *retval);
void	handle_unsigned_decimal(int ud, int *retval);
void	handle_hex_lower(unsigned int hexl, int *retval);
void	handle_hex_upper(unsigned int hexu, int *retval);

char	*hex_to_string(unsigned int address);
char	*address_to_string(uintptr_t address);

#endif
