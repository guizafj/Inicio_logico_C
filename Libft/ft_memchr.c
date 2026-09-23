/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:46:25 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:26:49 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Searches for the first occurrence of byte c in src, up to n bytes.
*/
void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				index;
	const unsigned char	*buff_src;

	buff_src = (const unsigned char *)src;
	index = 0;
	while (index < n)
	{
		if (buff_src[index] == (unsigned char)c)
			return ((void *)(buff_src + index));
		index++;
	}
	return ((void *)0);
}
