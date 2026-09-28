/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:19:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/28 15:19:09 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
