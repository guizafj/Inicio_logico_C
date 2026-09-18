/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:01:51 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/18 21:27:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*dst;

	index = 0;
	dst = '\0';
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			dst = s + index;
		index++;
	}
	return (dst);
}
