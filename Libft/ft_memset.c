/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:47:15 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/21 13:47:16 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
