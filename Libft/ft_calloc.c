/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:43:15 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:23:52 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates zero-initialised memory using malloc.
*/
void	*ft_calloc(size_t n, size_t size)
{
	void	*point;

	if (n != 0 && (((size_t) - 1) / n) < size)
		return (NULL);
	point = malloc(n * size);
	if (!point)
		return (NULL);
	ft_bzero(point, (n * size));
	return (point);
}
/*
int	main(void)
{
	size_t	n =  - 1;
	size_t	*ptr;

	ptr = ft_calloc(n, sizeof(size_t));
	printf("%p\n", (void *) ptr);
	free(ptr);
	return (0);
}*/
