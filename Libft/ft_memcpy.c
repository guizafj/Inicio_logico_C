/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:46:50 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 23:14:11 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies a block of bytes from one memory address to another.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*buff_dest;
	const unsigned char	*buff_src;
	size_t				index;

	buff_dest = (unsigned char *)dest;
	buff_src = (const unsigned char *) src;
	index = 0;
	if (buff_dest[index] == '\0' && buff_src[index] == '\0')
		return (dest);
	while (index < n)
	{
		buff_dest[index] = buff_src[index];
		index++;
	}
	return (dest);
}
/*
int main(void)
{
	char src1[] = "xyz";
	char dest1[] = "000";
	ft_memcpy(dest1, src1, 2);
	if (dest1[0] == 'x' && dest1[1] == 'y' && dest1[2] == '0')
		printf("Test 1: OK\n");
	else
		printf("Test 1: ERROR\n");

	char dest2[] = "abc";
	ft_memcpy(dest2, "123", 0);
	if (dest2[0] == 'a' && dest2[1] == 'b' && dest2[2] == 'c')
		printf("Test 2: OK\n");
	else
		printf("Test 2: ERROR\n");

	return (0);
}*/
