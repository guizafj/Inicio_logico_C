/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 21:13:30 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/07 18:31:03 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_parameter(int fd, char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar_printf(fd, va_arg(args, int));
	else if (c == 's')
		len += ft_putstr_printf(fd, va_arg(args, char *));
	else if (c == 'p')
		len += ft_putnbr_addrr_printf(fd, va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr_printf(fd, va_arg(args, int));
	else if (c == 'u')
		len += ft_putnbr_base_printf(fd, va_arg(args, unsigned int),
				"0123456789");
	else if (c == 'x')
		len += ft_putnbr_base_printf(fd, va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (c == 'X')
		len += ft_putnbr_base_printf(fd, va_arg(args, unsigned int),
				"0123456789ABCDEF");
	else if (c == '%')
		len += ft_putchar_printf(fd, '%');
	return (len);
}

int	ft_printf(int fd, char const *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			len += ft_putchar_printf(fd, format[i]);
		else
		{
			i++;
			len += check_parameter(fd, format[i], args);
		}
		if (format[i])
			i++;
	}
	va_end(args);
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
ft_printf("char: %c\n", '\0');
//printf("str: %s\n", (void *)0);
ft_printf("ptr: %p\n", (void *) 0x1234);
ft_printf("int: %d %i\n", -42, 42);
ft_printf("uint: %u\n", 4294967295u);
ft_printf("hex: %x %X\n", 255, 255);
ft_printf("percent: %%\n");
printf("%x\n", -9876);
ft_printf("%x\n", -9876);
ft_printf(" jknjhb%");
return (0);
}*/
