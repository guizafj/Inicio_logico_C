/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 21:13:30 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/28 00:50:05 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_parameter(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_putnbr_addrr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	else if (c == 'x')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			len += ft_putchar(str[i]);
		else
		{
			i++;
			len += check_parameter(str[i], args);
		}
		if (str[i])
			i++;
	}
	va_end(args);
	return (len);
}
