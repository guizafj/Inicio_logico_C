/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:44:10 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:24:43 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Checks whether a character is a digit (0-9).
Returns 1 if true and 0 otherwise.
*/
int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

/*
int	main(void)
{
	printf("%d ", ft_isdigit(200));
	return (0);
}*/
