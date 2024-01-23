/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:34:55 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/22 17:03:01 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char *format)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_print_char(va_arg(args, int));
	if (*format == '%')
		count += ft_putchar('%');
	if (*format == 'd' || *format == 'i')
		count += ft_print_int(va_arg(args, int));
	if (*format == 's')
		count += ft_print_str(va_arg(args, char *));
	if (*format == 'x')
		count += ft_print_hexa(va_arg(args, unsigned int), "0123456789abcdef");
	if (*format == 'X')
		count += ft_print_hexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (*format == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	if (*format == 'u')
		count += ft_print_u(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%' && (*format + 1) != '\0')
		{
			count += ft_format(args, (format + 1));
			format++;
		}
		else
			count += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
