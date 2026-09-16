/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 22:00:41 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/16 10:59:45 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*buff_dest;
	const unsigned char	*buff_src;
	size_t				index;

	buff_dest = (unsigned char *)dest;
	buff_src = (const unsigned char *)src;
	if (!buff_dest && !buff_src)
		return (dest);
	index = 0;
	if (buff_dest <= buff_src)
	{
		while (index < n)
		{
			buff_dest[index] = buff_src[index];
			index++;
		}
	}
	else
	{
		while (n--)
			buff_dest[n] = buff_src[n];
	}
	return (dest);
}
