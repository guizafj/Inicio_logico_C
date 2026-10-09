/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:47:06 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 22:17:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*buff_dest;
	const unsigned char	*buff_src;
	size_t				index;

	buff_dest = (unsigned char *) dest;
	buff_src = (const unsigned char *) src;
	if (!buff_dest && !buff_src)
		return (dest);
	index = 0;
	if (buff_dest <= buff_src)
	{
		while (index < n)
		{
			buff_dest[index] = buff_src[index];
			index++;
		}
	}
	else
	{
		while (n--)
			buff_dest[n] = buff_src[n];
	}
	return (dest);
}
/*
int	main(void)
{
	char	src1[10] = "abcdef";
	char	dest1[10] = "000000";
	char	str2[10] = "123456";
	char	str3[10] = "123456";
	char	dest4[5] = "abc";

	ft_memmove(dest1, src1, 4);
	if (dest1[0] == 'a' && dest1[1] == 'b' && dest1[2] == 'c'
		&& dest1[3] == 'd' && dest1[4] == '0')
		printf("Test 1: OK\n");
	else
		printf("Test 1: ERROR\n");
	ft_memmove(str2 + 2, str2, 3);
	if (str2[0] == '1' && str2[1] == '2' && str2[2] == '1'
		&& str2[3] == '2' && str2[4] == '3' && str2[5] == '6')
		printf("Test 2: OK\n");
	else
		printf("Test 2: ERROR\n");
	ft_memmove(str3, str3 + 2, 3);
	if (str3[0] == '3' && str3[1] == '4' && str3[2] == '5'
		&& str3[3] == '4' && str3[4] == '5' && str3[5] == '6')
		printf("Test 3: OK\n");
	else
		printf("Test 3: ERROR\n");
	ft_memmove(dest4, "xyz", 0);
	if (dest4[0] == 'a' && dest4[1] == 'b' && dest4[2] == 'c')
		printf("Test 4: OK\n");
	else
		printf("Test 4: ERROR\n");
	return (0);
}*/
