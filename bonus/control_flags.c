/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:29:21 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/09 11:18:16 by ygonzale         ###   ########.fr       */
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
	{
		i = va_arg(pd, int);
		if (i >= 0)
			dest += ft_putchar('+');
		dest += ft_putnbr(i);
	}
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
	if (c == 'd' || c == 'i')
	{
		i = va_arg(pd, int);
		if (i >= 0)
			dest += ft_putchar(' ');
		dest += ft_putnbr(i);
	}
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
	{
		i = va_arg(pd, unsigned long int);
		if (i != 0)
			dest += ft_putstr("0x");
		dest += ft_puthexa(i, c);
	}
	else
		dest += general_formats(pd, c);
	return (dest);
}
