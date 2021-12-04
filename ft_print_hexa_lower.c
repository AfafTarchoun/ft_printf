/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:19:46 by atarchou          #+#    #+#             */
/*   Updated: 2021/12/04 14:59:03 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa_lower(unsigned int nb, int *len)
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
		ft_print_hexa_lower(nb / 16, len);
		ft_print_hexa_lower(nb % 16, len);
	}
}
