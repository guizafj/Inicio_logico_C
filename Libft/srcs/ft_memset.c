/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 17:40:33 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/16 10:59:45 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*point;

	point = (unsigned char *)str;
	while (n > 0)
	{
		*point = (unsigned char)c;
		point++;
		n--;
	}
	return (str);
}
