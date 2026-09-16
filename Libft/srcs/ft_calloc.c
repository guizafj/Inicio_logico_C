/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:14:51 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/16 10:59:45 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*calloc(size_t n, size_t size)
{
	void	*point;

	if (n != 0 && (((size_t) - 1) / n) < size)
		return (NULL);
	point = malloc(n * size);
	if (!point)
		return (NULL);
	ft_bzero(point, (n * size));
	return (point);
}
