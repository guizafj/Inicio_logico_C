/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 21:27:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/13 14:00:19 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*buff_dest;
	const unsigned char	*buff_src;
	size_t				index;

	buff_dest = (unsigned char *)dest;
	buff_src = (const unsigned char *) src;
	index = 0;
	if (buff_dest[index] == '\0' && buff_src[index] == '\0')
		return (dest);
	while (index < n)
	{
		buff_dest[index] = buff_src[index];
		index++;
	}
	return (dest);
}
