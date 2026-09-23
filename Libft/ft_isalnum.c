/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:43:24 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:24:17 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Checks whether c is alphabetic or numeric. Returns 1 if true and 0 otherwise.
*/
int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d ", ft_isalnum(57));
	return (0);
}*/
