/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 14:11:18 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/18 21:27:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_n(long n)
{
	size_t	len;

	len = !n;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	write_dest(long n, char *dest, size_t len)
{
	ssize_t	index;

	index = len - 1;
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		dest[index] = n % 10 + '0';
		n /= 10;
		index--;
	}
}

char	*ft_itoa(int n)
{
	char	*dest;
	size_t	len;
	long	nb;

	nb = n;
	len = len_n(nb);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	write_dest(nb, dest, len);
	dest[len] = '\0';
	return (dest);
}
