/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:47:00 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/03 13:20:39 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		dest += ft_puthexa(va_arg(pd, int), c);
	else if (c == 'X')
		dest += ft_puthexa(va_arg(pd, int), c);
	else if (c == '%')
		dest += ft_putchar('%');
	else if (c == 'p')
		dest += ft_putstr("0x10") + ft_puthexa(va_arg(pd, int), c);
	return (dest);
}

int	ft_printf(char const *str, ...)
{
	va_list	pd;
	int		i;
	int		dest;

	dest = 0;
	i = 0;
	va_start(pd, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			dest += general_formats(pd, str[i + 1]);
			i += 2;
		}
		else
		{
			dest += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(pd);
	return (dest);
}

/* int	main(void)
{
 ft_printf(" %c %c %c \n", '0', 0, '1');
	printf (" %c %c %c ", '0', 0, '1'); 
	ft_printf("%x\n", -45);
	//printf("\n%x", -45);
} */
