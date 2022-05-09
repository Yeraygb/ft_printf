/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:44:15 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/09 11:17:58 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putchar(char c)
{
	int	dest;

	dest = 0;
	dest += write(1, &c, 1);
	return (dest);
}

int	ft_putstr(char *str)
{
	int	i;
	int	dest;

	i = 0;
	dest = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		dest += ft_putchar(str[i]);
		i++;
	}
	return (dest);
}

int	ft_putnbr(int nb)
{
	int	dest;

	dest = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		dest += write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		dest += ft_putnbr(nb / 10);
	nb = nb % 10;
	if (nb < 10)
		dest += ft_putchar(nb + 48);
	return (dest);
}

int	ft_puthexa(unsigned long int nb, char c)
{
	int	dest;

	dest = 0;
	if (c == 'x' || c == 'p')
	{
		if (nb >= 16)
			dest += ft_puthexa(nb / 16, c);
		dest += ft_putchar("0123456789abcdef" [nb % 16]);
	}
	else if (c == 'X')
	{
		if (nb >= 16)
			dest += ft_puthexa(nb / 16, c);
		dest += ft_putchar("0123456789ABCDEF" [nb % 16]);
	}
	return (dest);
}

int	ft_putunnbr(unsigned int nb)
{
	int	dest;

	dest = 0;
	if (nb >= 10)
		dest += ft_putunnbr(nb / 10);
	nb = nb % 10;
	if (nb < 10)
		dest += ft_putchar(nb + 48);
	return (dest);
}
