/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:35:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/27 13:58:46 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_check_base(char *str)
{
	int	len_base;
	int	i;

	len_base = 0;
	while (str[len_base])
	{
		if (str[len_base] == '+' || str[len_base] == '-')
			return (0);
		if (str[len_base] < ' ' || str[len_base] > '~')
			return (0);
		i = len_base + 1;
		while (str[i])
		{
			if (str[len_base] == str[i])
				return (0);
			i++;
		}
		len_base++;
	}
	if (len_base <= 1)
		return (0);
	return (len_base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		len_base;

	num = nbr;
	len_base = ft_check_base(base);
	if (len_base == 0)
		return ;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		num = num * (-1);
	}
	if (num >= len_base)
	{
		ft_putnbr_base((num / len_base), base);
		ft_putnbr_base((num % len_base), base);
	}
	else
	{
		ft_putchar_fd(base[num], 1);
	}
}

// int	main(void)
// {
// 	char	base[] = "0123456789abcdef";
// 	int 	nbr = -255;
// 	ft_putnbr_base(nbr, base);
// 	return (0);
// }
