/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 09:40:38 by fradiaz           #+#    #+#             */
/*   Updated: 2026/08/28 10:20:21 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || is_charset(str[i - 1], charset) == 1)
			&& is_charset(str[i], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

size_t	word_length(char *str, char *charset)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && (is_charset(str[len], charset) == 0))
		len++;
	return (len);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*strcp;
	size_t	j;
	size_t	len;

	len = word_length(str, charset);
	strcp = malloc(sizeof(char) * (len + 1));
	if (!strcp)
		return (NULL);
	j = 0;
	while (j < len)
	{
		strcp[j] = str[j];
		j++;
	}
	strcp[j] = '\0';
	return (strcp);
}

char	**ft_split(char *str, char *charset)
{
	char		**tab;
	size_t		i;
	int			word_index;

	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	word_index = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 0)
		{
			tab[word_index] = ft_strdup(&str[i], charset);
			if (!tab[word_index])
				return (NULL);
			i += word_length(&str[i], charset);
			word_index++;
		}
		else
			i++;
	}
	tab[word_index] = NULL;
	return (tab);
}
/*
// Funciones auxiliares
#include <stdio.h>

void    free_split(char **tab)
{
	int i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void    print_and_free(char **res)
{
	int i;

	if (!res)
	{
		printf("Resultado: (null)\n\n");
		return ;
	}
	i = 0;
	while (res[i])
	{
		printf("  [%d]: \"%s\"\n", i, res[i]);
		i++;
	}
	printf("  [%d]: NULL\n\n", i);
	free_split(res); 
}

int main(void)
{
	printf("--- Test 1: Cadena estándar ---\n");
	print_and_free(ft_split("Hola 42 Malaga campus", " "));
	printf("--- Test 2: Múltiples separadores juntos y extremos ---\n");
	print_and_free(ft_split(";;;Hola;;mundo;;;", ";"));

	printf("--- Test 3: Cadena vacía ---\n");
	print_and_free(ft_split("", " "));

	printf("--- Test 4: Sin separadores ---\n");
	print_and_free(ft_split("PalabraSinSeparador", ","));
	return (0);
}
*/
