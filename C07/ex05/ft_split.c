/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 14:19:59 by fradiaz           #+#    #+#             */
/*   Updated: 2026/07/29 18:38:00 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (charset[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((!is_sep(str[i], charset) && (str[i] != '\0'))
			&& (is_sep(str[i - 1], charset) || i == 0))
			count++;
		i++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	k;

	k = 0;
	while (str[k] != '\0' && (!is_sep(str[k], charset)))
		k++;
	return (k);
}

char	*ft_strdup(char *src, int len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (src == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		num_words;
	int		count_letters;
	char	**res;
	int		indice;

	num_words = count_words(str, charset);
	res = malloc(sizeof(char *) * (num_words + 1));
	if (!res)
		return (NULL);
	indice = 0;
	while (*str) // str[i]
	{
		while (*str && is_sep(*str, charset))
			str++; //i++;
		if (*str)
		{
			count_letters = ft_word_len(str, charset); // &str[i]
			res[indice] = ft_strdup(str, count_letters); // &str[i]
			if (!res[indice])
				return (NULL);
			indice++;
			str += count_letters; // i+= count_letters;
		}
	}
	res[indice] = NULL;
	return (res);
}
