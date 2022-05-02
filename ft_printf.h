/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:14:33 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/02 11:33:26 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
char	ft_printf_utils(char c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(char nb);
void	ft_puthexa(unsigned long int nb, char c);
void	ft_putunnbr(unsigned int nb);

#endif