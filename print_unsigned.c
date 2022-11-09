/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <flcristi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:08:53 by flcristi          #+#    #+#             */
/*   Updated: 2022/11/09 03:39:50 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int size)
{
	int		i;
	char	c;

	i = 0;
	if (size >= 10)
		i += ft_print_unsigned(size / 10);
	i += ft_putchar(size % 10 + '0');
	return (i);
}