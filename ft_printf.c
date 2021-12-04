/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:52:28 by atarchou          #+#    #+#             */
/*   Updated: 2021/12/04 15:08:09 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_string(char *str, int *len)
{
	if (!str)
		ft_putstr("(null)", len);
	else
		ft_putstr(str, len);
}

static void	ft_check(char c, va_list arg, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), len);
	if (c == 's')
		ft_put_string(va_arg(arg, char *), len);
	if (c == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int), len);
	if (c == '%')
		ft_putchar('%', len);
	if (c == 'x')
		ft_print_hexa_lower(va_arg(arg, unsigned int), len);
	if (c == 'X')
		ft_print_hexa_upper(va_arg(arg, unsigned int), len);
	if (c == 'p')
		ft_print_address(va_arg(arg, unsigned long), len);
	if (c == 'c')
		ft_putchar(va_arg(arg, int), len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_check(format[++i], arg, &len);
		}
		else
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(arg);
	return (len);
}
