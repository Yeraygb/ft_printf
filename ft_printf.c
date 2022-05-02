/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:47:00 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/02 17:28:53 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	general_formats(va_list pd, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(pd, int));
	else if (c == 's')
		ft_putstr(va_arg(pd, char *));
	else if (c == 'd')
		ft_putnbr(va_arg(pd, int));
	else if (c == 'i')
		ft_putnbr(va_arg(pd, int));
	else if (c == 'u')
		ft_putunnbr(va_arg(pd, unsigned int));
	else if (c == 'x')
		ft_puthexa(va_arg(pd, int), c);
	else if (c == 'X')
		ft_puthexa(va_arg(pd, int), c);
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'p')
	{
		ft_putstr("0x10");
		ft_puthexa(va_arg(pd, int), c);
	}
}

int	ft_printf(char const *str, ...)
{
	va_list	pd;
	int		i;

	i = 0;
	va_start(pd, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			general_formats(pd, str[i + 1]);
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(pd);
	return (str[i]);
}

int	main(void)
{
	int x, y;

	x = ft_printf(" %d\n", 42);
	y = printf (" %s\n", "hola2");

	printf("x --> %d || y --> %d\n", x, y);
	return (0);
}
