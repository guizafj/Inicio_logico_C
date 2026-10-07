/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:58:09 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/07 15:46:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_printf(int c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr_addrr_printf(void *addr)
{
	int	len;

	if (!addr)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	len += ft_putnbr_base_printf((unsigned long) addr, "0123456789abcdef");
	return (len);
}

int	ft_putnbr_base_printf(unsigned long nbr, char *base)
{
	int				len;
	unsigned long	len_base;

	len_base = 0;
	while (base[len_base])
		len_base++;
	len = 0;
	if (nbr >= len_base)
	{
		len = ft_putnbr_base_printf(nbr / len_base, base);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar_printf(base[nbr % len_base]) == -1)
		return (-1);
	return (len + 1);
}

int	ft_putnbr_printf(int n)
{
	long	num;
	int		len;

	len = 0;
	num = n;
	if (num < 0)
	{
		len += ft_putchar_printf('-');
		num *= -1;
	}
	if (num >= 10)
		len += ft_putnbr_printf(num / 10);
	len += ft_putchar_printf(((num % 10) + '0'));
	return (len);
}

int	ft_putstr_printf(char *s)
{
	size_t	length;

	if (!s)
		return (write(1, "(null)", 6));
	length = 0;
	while (s[length])
		length++;
	return (write(1, s, length));
}
