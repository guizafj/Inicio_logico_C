/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:12:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/15 12:57:05 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	if (n == 0)
		return (0);
	index = 0;
	while ((s1[index] != '\0' && s2[index] != '\0')
		&& (s1[index] == s2[index]) && (index < (n - 1)))
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
