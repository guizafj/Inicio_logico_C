/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:52 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 08:55:31 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Calculates the length of a string.
*/
size_t	ft_strlen(const char *str)
{
	size_t	length;

	if (!str)
		return (0);
	length = 0;
	while (str[length])
		length++;
	return (length);
}
/*
int	main(void)
{
	char	*str;
	size_t	length;

	str = "Probando la longitud";
	length = ft_strlen(str);
	printf("%zu ", length);
	return (0);
}*/
