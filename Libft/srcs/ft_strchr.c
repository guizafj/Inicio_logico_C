/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:32:04 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/15 12:55:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*strchr(const char *s, int c)
{
	int		index;
	char	*dst;

	index = 0;
	while (s[index] != (char)c && s[index] != '\0')
		index++;
	if (s[index] == (char)c)
		dst = (char *)&s[index];
	else
		dst = (void *)0;
	return (dst);
}
