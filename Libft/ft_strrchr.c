/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:50:33 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/21 13:50:35 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			index;
	const char	*dst;

	index = 0;
	dst = NULL;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			dst = s + index;
		index++;
	}
	if ((char)c == '\0')
		return ((char *)(s + index));
	return ((char *)dst);
}
