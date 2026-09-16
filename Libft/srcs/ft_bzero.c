/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 18:38:22 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/16 10:59:45 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*point;

	point = (unsigned char *)str;
	while (n > 0)
	{
		*point = 0;
		point++;
		n--;
	}
}
