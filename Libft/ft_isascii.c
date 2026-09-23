/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:43:59 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:24:34 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Checks whether a character belongs to the ASCII table (0-127).
Returns 1 if true and 0 otherwise.
*/
int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}

/*
int	main(void)
{
	printf("%d ", ft_isascii(200));
	return (0);
}*/
