/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 11:57:07 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/18 21:27:57 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char set)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if ((index == 0 && str[index] != set) || (str[index - 1] == set
				&& str[index] != set))
			count++;
		index++;
	}
	return (count);
}

static void	free_split(char **tab)
{
	int	index;

	if (!tab)
		return ;
	index = 0;
	while (tab[index])
	{
		free(tab[index]);
		index++;
	}
	free(tab);
}

static char	*strdup_split(char const **src, char set)
{
	char	*dest;
	size_t	index;
	size_t	length;

	if (!src || !*src)
		return (NULL);
	length = 0;
	while ((*src)[length] != '\0' && (*src)[length] != set)
		length++;
	dest = malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (NULL);
	index = 0;
	while (index < length)
	{
		dest[index] = (*src)[index];
		index++;
	}
	dest[index] = '\0';
	*src += length;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_ptr;
	size_t	index;

	if (!s)
		return (NULL);
	arr_ptr = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!arr_ptr)
		return (NULL);
	index = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
		{
			arr_ptr[index] = strdup_split(&s, c);
			if (!arr_ptr[index])
			{
				free_split(arr_ptr);
				return (NULL);
			}
			index++;
		}
	}
	return (arr_ptr);
}
