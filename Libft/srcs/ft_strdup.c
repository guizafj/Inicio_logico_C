/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:35:10 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/18 21:27:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* Use correct -> ft_memcpy(ptr, str, len + 1);*/
