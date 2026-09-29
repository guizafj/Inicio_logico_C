/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_addrr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:35:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/29 10:15:36 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_addrr(void *addr)
{
	int	len;

	if (!addr)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	len += ft_putnbr_base((unsigned long) addr, "0123456789abcdef");
	return (len);
}
/*
int	main(void)
{
	char	base[] = "0123456789abcdef";
	int		nbr = -255;

	ft_putnbr_base(nbr, base);
	return (0);
}*/
