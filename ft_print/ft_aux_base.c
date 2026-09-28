/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:35:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/28 00:33:43 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	size_t	length;

	if (!s)
		return (write(1, "(null)", 6));
	length = 0;
	while (s[length])
		length++;
	return (write(1, s, length));
}

int	ft_putnbr(int n)
{
	long	num;
	int		len;

	len = 0;
	num = n;
	if (num < 0)
	{
		len += ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		len += ft_putnbr(num / 10);
	len += ft_putchar(((num % 10) + '0'));
	return (len);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int				len;
	unsigned long	len_base;

	len_base = 0;
	while (base[len_base])
		len_base++;
	len = 0;
	if (nbr >= len_base)
		len += ft_putnbr_base((nbr / len_base), base);
	ft_putchar((base[nbr % len_base]));
	return (len + 1);
}

int	ft_putnbr_addrr(void *addr)
{
	int	len;

	if (!addr)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	len += ft_putnbr_base((unsigned long) addr, "0123456789abcdef");
	return (len);
}

// int	main(void)
// {
// 	char	base[] = "0123456789abcdef";
// 	int 	nbr = -255;
// 	ft_putnbr_base(nbr, base);
// 	return (0);
// }
