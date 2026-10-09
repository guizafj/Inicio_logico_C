/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:58:09 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/07 18:30:34 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_printf(int fd, int c)
{
	return (write(fd, &c, 1));
}

int	ft_putnbr_addrr_printf(int fd, void *addr)
{
	int	len;

	if (!addr)
		return (write(fd, "(nil)", 5));
	len = write(1, "0x", 2);
	len += ft_putnbr_base_printf(fd, (unsigned long) addr, "0123456789abcdef");
	return (len);
}

int	ft_putnbr_base_printf(int fd, unsigned long nbr, char *base)
{
	int				len;
	unsigned long	len_base;

	len_base = 0;
	while (base[len_base])
		len_base++;
	len = 0;
	if (nbr >= len_base)
	{
		len = ft_putnbr_base_printf(fd, nbr / len_base, base);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar_printf(fd, base[nbr % len_base]) == -1)
		return (-1);
	return (len + 1);
}

int	ft_putnbr_printf(int fd, int n)
{
	long	num;
	int		len;

	len = 0;
	num = n;
	if (num < 0)
	{
		len += ft_putchar_printf(fd, '-');
		num *= -1;
	}
	if (num >= 10)
		len += ft_putnbr_printf(fd, num / 10);
	len += ft_putchar_printf(fd, ((num % 10) + '0'));
	return (len);
}

int	ft_putstr_printf(int fd, char *s)
{
	size_t	length;

	if (!s)
		return (write(fd, "(null)", 6));
	length = 0;
	while (s[length])
		length++;
	return (write(fd, s, length));
}
