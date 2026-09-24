/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:02 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 23:12:18 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Duplicates a string by allocating memory with malloc.
*/
char	*ft_strdup(const char *str)
{
	size_t	length;
	char	*ptr;

	length = ft_strlen(str);
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);
	length = 0;
	while (str[length])
	{
		ptr[length] = str[length];
		length++;
	}
	ptr[length] = '\0';
	return (ptr);
}
/* Use correct -> ft_memcpy(ptr, str, len + 1);
int	main(void)
{
	char 	str[16] = "Copia de prueba";
	char	*ptr = ft_strdup(str);

	printf("%s ", ptr);
	free(ptr);
	return (0);
}*/
