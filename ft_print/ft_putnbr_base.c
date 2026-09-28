/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:18:56 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/28 15:19:01 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
