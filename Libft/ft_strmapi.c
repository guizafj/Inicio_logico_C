/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:50:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/21 13:50:06 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	size_t			len;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (s[index])
	{
		ptr[index] = f(index, s[index]);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
