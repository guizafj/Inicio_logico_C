/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:18:56 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/29 11:31:26 by fradiaz          ###   ########.fr       */
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
	{
		len = ft_putnbr_base(nbr / len_base, base);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar(base[nbr % len_base]) == -1)
		return (-1);
	return (len + 1);
}
