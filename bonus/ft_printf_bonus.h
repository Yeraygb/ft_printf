/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:45:36 by ygonzale          #+#    #+#             */
/*   Updated: 2022/05/05 16:27:41 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf_bonus(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_puthexa(unsigned long int nb, char c);
int		ft_putunnbr(unsigned int nb);
size_t	ft_strlen(const char *str);
int		general_formats(va_list pd, char c);
int		ft_control_flags_plus(va_list pd, char c);
int		ft_control_flags_space(va_list pd, char c);
int		ft_control_flags_sharp(va_list pd, char c);

#endif