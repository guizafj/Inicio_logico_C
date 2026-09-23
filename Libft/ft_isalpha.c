/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:43:51 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:24:23 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Checks whether character is alphabetic. Returns 1 if true and 0 otherwise.
*/
int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d ", ft_isalpha(100));
	return (0);
}*/
