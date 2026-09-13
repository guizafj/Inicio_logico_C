/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 17:40:33 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/11 18:23:35 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, ssize_t n)
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
