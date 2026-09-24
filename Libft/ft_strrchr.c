/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:50:33 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 09:29:14 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Searches for the last occurrence of a character in a string.
*/
char	*ft_strrchr(const char *s, int c)
{
	int			index;
	const char	*dst;

	index = 0;
	dst = NULL;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			dst = s + index;
		index++;
	}
	if ((char)c == '\0')
		return ((char *)(s + index));
	return ((char *)dst);
}
/*
int	main(void)
{
	char  str[29] = "Esta busqueda no es buscada";

	printf("%s ", ft_strrchr(str, 'q'));
	return (0);
}*/
