/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:47:27 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/02 11:33:22 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(char nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 0)
	{
		ft_putchar('0' - nb % 10);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar(nb = '0' - nb % 10);
}

void	ft_puthexa(unsigned long int nb, char c)
{
	if (c == 'x' || c == 'p')
	{
		if (nb >= 16)
			ft_puthexa(nb / 16, c);
		ft_putchar("0123456789abcdef" [nb % 16]);
	}
	else if (c == 'X')
	{
		if (nb >= 16)
			ft_puthexa(nb / 16, c);
		ft_putchar("0123456789ABCDEF" [nb % 16]);
	}
}

void	ft_putunnbr(unsigned int nb)
{
	if (nb > 9)
		ft_putunnbr(nb / 10);
	ft_putchar(nb % 10);
}
