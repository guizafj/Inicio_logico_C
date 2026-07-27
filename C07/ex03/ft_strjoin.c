/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:36:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/07/27 21:17:34 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	if (size <= 0)
	{
		dest = malloc(sizeof(char) * 1);
		if (dest == NULL)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	dest[0] = '\0';
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest = ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hola", "42", "Malaga", "Cybersecurity"};
	char	*sep = ", ";
	char	*result;

	printf("=== TEST 1: Caso normal (4 elementos) ===\n");
	result = ft_strjoin(4, strs, sep);
	printf("Resultado: \"%s\"\n", result);
	free(result); // ¡Siempre liberar la memoria reservada con malloc!

	printf("\n=== TEST 2: Separador vacío (\"\" ) ===\n");
	result = ft_strjoin(4, strs, "");
	printf("Resultado: \"%s\"\n", result);
	free(result);

	printf("\n=== TEST 3: Solo 1 elemento (size = 1) ===\n");
	result = ft_strjoin(1, strs, sep);
	printf("Resultado: \"%s\"\n", result);
	free(result);

	printf("\n=== TEST 4: Caso límite (size = 0) ===\n");
	result = ft_strjoin(0, strs, sep);
	if (result != NULL)
	{
		printf("Resultado: \"%s\" (Longitud esperada: 0)\n", result);
		free(result);
	}
	else
		printf("Error: Devolvió NULL en vez de una cadena vacía.\n");

	return (0);
}*/
