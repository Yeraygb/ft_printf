/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:29:21 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/05 16:41:22 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_control_flags_plus(va_list pd, char c)
{	
	int	dest;
	int	i;

	i = 0;
	dest = 0;
	if (c == 'd' || c == 'i')
		dest += ft_putchar('+') + general_formats(pd, c);
	else
		dest += general_formats(pd, c);
	return (dest);
}

int	ft_control_flags_space(va_list pd, char c)
{
	int	dest;
	int	i;

	i = 0;
	dest = 0;
	if (c == 's' || c == 'd' || c == 'i')
		dest += ft_putchar(' ') + general_formats(pd, c);
	else
		dest += general_formats(pd, c);
	return (dest);
}

int	ft_control_flags_sharp(va_list pd, char c)
{
	int	dest;
	int	i;

	i = 0;
	dest = 0;
	if (c == 'x' || c == 'X')
		dest += ft_putstr("0x") + general_formats(pd, c);
	else
		dest += general_formats(pd, c);
	return (dest);
}
