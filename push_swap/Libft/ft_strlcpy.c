/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:38 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 08:52:41 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Safely copies a string while controlling the destination buffer size.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	length;
	size_t	index;

	length = 0;
	while (src[length] != '\0')
		length++;
	if (dsize == 0)
		return (length);
	index = 0;
	while (src[index] != '\0' && index < dsize - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (length);
}
/*
int	main(void)
{
	char	destination[10];
	size_t	result;

	ft_memset(destination, 'A', sizeof(destination));
	result = ft_strlcpy(destination, "coucou", sizeof(destination));
	printf("Resultado: %s\n", destination);
	printf("Longitud devuelta: %zu\n", result);
	if (result == ft_strlen("coucou")
		&& ft_strncmp(destination, "coucou", sizeof(destination)) == 0)
		printf("[OK]\n");
	else
		printf("[FAIL]\n");
	return (0);
}*/
