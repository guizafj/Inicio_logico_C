/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:29 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/21 13:49:30 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	src_index;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	dst_length = 0;
	while (dst[dst_length] != '\0' && dst_length < size)
		dst_length++;
	if (size <= dst_length)
		return (size + src_length);
	src_index = 0;
	while (src[src_index] != '\0' && ((dst_length + src_index) < (size -1)))
	{
		dst[dst_length + src_index] = src[src_index];
		src_index++;
	}
	dst[dst_length + src_index] = '\0';
	return (dst_length + src_length);
}
