/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 18:38:22 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/12 21:26:50 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
