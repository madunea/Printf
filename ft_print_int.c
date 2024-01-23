/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:46:43 by maduneau          #+#    #+#             */
/*   Updated: 2024/01/16 14:48:56 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int	count;

	count = 0;
	count += ft_putnbr(n);
	return (count);
}

int	ft_print_u(unsigned int n)
{
	int	count;

	count = 0;
	count += ft_putnbr_u(n);
	return (count);
}
