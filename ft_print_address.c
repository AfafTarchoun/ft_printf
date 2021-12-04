/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:52:06 by atarchou          #+#    #+#             */
/*   Updated: 2021/12/04 14:52:41 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_address(unsigned long address, int *len)
{
	ft_putstr("0x", len);
	ft_print_hexa_address(address, len);
}
