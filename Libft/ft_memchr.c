/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:46:25 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 10:14:15 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Searches for the first occurrence of byte c in src, up to n bytes.
*/
void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				index;
	const unsigned char	*buff_src;

	buff_src = (const unsigned char *) src;
	index = 0;
	while (index < n)
	{
		if (buff_src[index] == (unsigned char) c)
			return ((void *)(buff_src + index));
		index++;
	}
	return ((void *) 0);
}
/*
static void	test_memchr(const void *src, int c, size_t n, int test_num)
{
	void	*res_compare;

	res_compare = ft_memchr(src, c, n);
	printf("--- TEST %d ---\n", test_num);
	printf("Buscando '%c' (int: %d) en los primeros %zu bytes\n",
		c ? c : '0', c, n);
	printf("Compare:      %p\n", res_compare);
}

int	main(int argc, char **argv)
{
	(void)argc;

	test_memchr(argv[1], 'H', 22, 1);
	test_memchr(argv[1], 'M', 22, 2);
	test_memchr(argv[1], 'z', 22, 3);
	test_memchr(argv[1], 'M', 3, 4);
	test_memchr(argv[1], '\0', 23, 5);
	return (0);
}*/
