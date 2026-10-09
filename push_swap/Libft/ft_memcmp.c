/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:46:35 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 22:19:01 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compares two memory blocks.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buff_s1;
	const unsigned char	*buff_s2;
	size_t				index;

	buff_s1 = (const unsigned char *)s1;
	buff_s2 = (const unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (buff_s1[index] != buff_s2[index])
			return (buff_s1[index] - buff_s2[index]);
		index++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%i ", ft_memcmp(argv[1], argv[2], 4));
	return (0);
}*/
