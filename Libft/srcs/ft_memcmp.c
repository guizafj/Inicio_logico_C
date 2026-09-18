/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:44:51 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/18 21:27:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buff_s1;
	const unsigned char	*buff_s2;
	size_t				index;

	if (n == 0)
		return (0);
	buff_s1 = (const unsigned char *)s1;
	buff_s2 = (const unsigned char *)s2;
	index = 0;
	while (index < (n - 1) && (buff_s1[index] == buff_s2[index]))
		index++;
	return (buff_s1[index] - buff_s2[index]);
}
