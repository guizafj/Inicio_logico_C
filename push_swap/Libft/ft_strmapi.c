/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:50:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 09:09:31 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies a function to each character of a string, creating a new string.
*/
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
/*
static char	to_upper(unsigned int index, char character)
{
	(void) index;
	if (character >= 'a' && character <= 'z')
		character -= 'a' - 'A';
	return (character);
}

int	main(int argc, char **argv)
{
	char	*result;

	if (argc != 2)
	{
		printf("Uso: %s texto\n", argv[0]);
		return (1);
	}
	result = ft_strmapi(argv[1], to_upper);
	if (!result)
		return (1);
	printf("Original: %s\n", argv[1]);
	printf("Resultado: %s\n", result);
	free(result);
	return (0);
}*/
