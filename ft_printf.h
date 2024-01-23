/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:19:19 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/19 17:04:07 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list args, const char *format);
int	ft_print_char(char c);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_print_hexa(unsigned long int n, char *base);
int	ft_print_int(int n);
int	ft_print_u(unsigned int n);
int	ft_putchar(char c);
int	ft_print_str(char *str);
int	ft_print_ptr(unsigned long int *ptr);
int	ft_print_u(unsigned int n);

#endif