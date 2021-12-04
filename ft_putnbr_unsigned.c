/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:51:19 by atarchou          #+#    #+#             */
/*   Updated: 2021/12/04 15:24:29 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, int *len)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		ft_putchar(c, len);
	}
	else
	{
		ft_putnbr_unsigned(nb / 10, len);
		ft_putnbr_unsigned(nb % 10, len);
	}
}
