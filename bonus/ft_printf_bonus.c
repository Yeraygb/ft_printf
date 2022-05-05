/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:28:03 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/05 16:46:06 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	general_formats(va_list pd, char c)
{
	int	dest;

	dest = 0;
	if (c == 'c')
		dest += ft_putchar(va_arg(pd, int));
	else if (c == 's')
		dest += ft_putstr(va_arg(pd, char *));
	else if (c == 'd')
		dest += ft_putnbr(va_arg(pd, int));
	else if (c == 'i')
		dest += ft_putnbr(va_arg(pd, int));
	else if (c == 'u')
		dest += ft_putunnbr(va_arg(pd, unsigned int));
	else if (c == 'x')
		dest += ft_puthexa(va_arg(pd, unsigned int), c);
	else if (c == 'X')
		dest += ft_puthexa(va_arg(pd, unsigned int), c);
	else if (c == '%')
		dest += ft_putchar('%');
	else if (c == 'p')
		dest += ft_putstr("0x") + ft_puthexa(va_arg(pd, unsigned long int), c);
	return (dest);
}

int	ft_printf_bonus(char const *str, ...)
{
	va_list	pd;
	int		i;
	int		dest;

	va_start(pd, str);
	i = 0;
	dest = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '+')
				dest += ft_control_flags_plus(pd, str[i + 2]);
			else if (str[i + 1] == ' ')
				dest += ft_control_flags_space(pd, str[i + 2]);
			else if (str[i + 1] == '#')
				dest += ft_control_flags_sharp(pd, str[i + 2]);
			i += 3;
		}
		else
			dest += ft_putchar(str[i++]);
	}
	va_end(pd);
	return (dest);
}

int	main(void)
{
	ft_printf_bonus("%#x\n", 3);
	printf("%#x", 3);
	return (0);
}
