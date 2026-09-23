/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:38 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/21 13:49:39 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	lenght;
	size_t	index;

	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	index = 0;
	if (dsize > 0)
	{
		while ((src[index] != '\0') && (index < (dsize - 1)))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (lenght);
}
