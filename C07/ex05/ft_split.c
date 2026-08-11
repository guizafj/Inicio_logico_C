/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 14:19:59 by fradiaz           #+#    #+#             */
/*   Updated: 2026/08/11 01:23:33 by fradiaz          ###   ########.fr       */
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

void	free_split(char **tab)
{
	int	i;

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

char	*ft_strdup(char **src, char *charset)
{
	char	*dest;
	int		i;
	int		len;

	if (src == NULL || *src == NULL)
		return (NULL);
	len = 0;
	while ((*src)[len] != '\0' && (!is_sep((*src)[len], charset)))
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = (*src)[i];
		i++;
	}
	dest[i] = '\0';
	*src += len;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		indice;

	res = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!res)
		return (NULL);
	indice = 0;
	while (*str) // str[i]
	{
		while (*str && is_sep(*str, charset))
			str++; //i++;
		if (*str)
		{
			res[indice] = ft_strdup(&str, charset); // &str[i]
			if (!res[indice])
			{
				free_split(res);
				return (NULL);
			}
			indice++;
		}
	}
	res[indice] = NULL;
	return (res);
}

#include <stdio.h>

// Declaración del prototipo de tu función

void	print_and_free(char **res)
{
	int	i;

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
	free_split(res); // Probamos tu función de liberación aquí
}

int	main(void)
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
