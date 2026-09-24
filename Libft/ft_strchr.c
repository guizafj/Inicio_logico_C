/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:48:48 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 23:00:51 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Searches for the first occurrence of a character in a string.
*/
char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*dst;

	index = 0;
	while (s[index] != (char)c && s[index] != '\0')
		index++;
	if (s[index] == (char)c)
		dst = (char *)&s[index];
	else
		dst = (void *)0;
	return (dst);
}
/*
int	main(void)
{
	char  str[27] = "Esta busqueda no es valida";

	printf("%s ", ft_strchr(str, 'q'));
	return (0);
}*/
