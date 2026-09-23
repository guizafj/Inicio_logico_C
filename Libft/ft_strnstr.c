/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:50:23 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/21 13:50:26 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	index_a;
	size_t	index_b;

	if (to_find[0] == '\0')
		return ((char *)str);
	index_a = 0;
	while (str[index_a] != '\0' && (index_a < n))
	{
		index_b = 0;
		while (to_find[index_b] != '\0' && (index_a + index_b < n)
			&& (str[index_a + index_b] == to_find[index_b]))
			index_b++;
		if (to_find[index_b] == '\0')
			return ((char *)&str[index_a]);
		index_a++;
	}
	return ((void *)0);
}
