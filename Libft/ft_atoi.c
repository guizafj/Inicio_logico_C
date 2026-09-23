/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:42:47 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:23:25 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Converts a string to an integer (int).
*/
int	ft_atoi(const char *nptr)
{
	int	result;
	int	index;
	int	sign;

	index = 0;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == 32)
		index++;
	sign = 1;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	result = 0;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result = result * 10 + (nptr[index] - '0');
		index++;
	}
	return (result * sign);
}
/*
int	main(int argc, char **argv)
{
(void) argc;
printf("%d ", ft_atoi(argv[1]));
}*/
