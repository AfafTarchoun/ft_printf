/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_address.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:54:07 by atarchou          #+#    #+#             */
/*   Updated: 2021/12/04 14:57:11 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa_address(unsigned long nb, int *len)
{
	char	c;

	if (nb < 16)
	{
		if (nb < 10)
			c = nb + '0';
		else
			c = nb + 87;
		ft_putchar(c, len);
	}
	else
	{
		ft_print_hexa_address(nb / 16, len);
		ft_print_hexa_address(nb % 16, len);
	}
}
