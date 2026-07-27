/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:36:01 by fradiaz           #+#    #+#             */
/*   Updated: 2026/07/27 14:59:42 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	size_t	i;
	size_t	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (long)max - (long)min;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
