/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:11:19 by fradiaz           #+#    #+#             */
/*   Updated: 2026/07/28 14:10:31 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	atoi_base(char *str, char *base, int len);

static int	check_base(char *str)
{
	int	len_base;
	int	i;

	len_base = 0;
	while (str[len_base])
	{
		if (str[len_base] == '+' || str[len_base] == '-')
			return (0);
		if (str[len_base] <= ' ' || str[len_base] > '~')
			return (0);
		i = len_base + 1;
		while (str[i])
		{
			if (str[len_base] == str[i])
				return (0);
			i++;
		}
		len_base++;
	}
	if (len_base <= 1)
		return (0);
	return (len_base);
}

static size_t	ft_nbr_len(long n, int base_len)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

static void	ft_fill_nbr(int len, long nbr, char *base_to, char *dest)
{
	int	module;
	int	len_to;

	len_to = check_base(base_to);
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		dest[0] = base_to[0];
	len -= 1;
	while (nbr > 0)
	{
		module = nbr % len_to;
		dest[len] = base_to[module];
		nbr /= len_to;
		len--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len_from;
	int		len_to;
	long	result;
	size_t	size;
	char	*str_reserved;

	len_from = check_base(base_from);
	len_to = check_base(base_to);
	if (len_from == 0 || len_to == 0)
		return (NULL);
	result = atoi_base(nbr, base_from, len_from);
	size = ft_nbr_len(result, len_to);
	str_reserved = malloc(sizeof(char) * (size + 1));
	if (!str_reserved)
		return (NULL);
	str_reserved[size] = '\0';
	ft_fill_nbr(size, result, base_to, str_reserved);
	return (str_reserved);
}
/*
#include <stdio.h>

int	main(void)
{
char	*res;

printf("=== TEST 1: Caso Estándar (Decimal a Hexadecimal) ===\n");
res = ft_convert_base("42", "0123456789", "0123456789ABCDEF");
printf("Esperado: \"2A\" | Resultado: \"%s\"\n\n", res);
free(res); // ¡Siempre liberar!

printf("=== TEST 2: Negativo + Espacios/Signos en nbr ===\n");
res = ft_convert_base("   ---+-42", "0123456789", "0123456789");
printf("Esperado: \"-42\" | Resultado: \"%s\"\n\n", res);
free(res);

printf("=== TEST 3: Base Binaria a Base Octal ===\n");
res = ft_convert_base("101010", "01", "01234567");
printf("Esperado: \"52\" | Resultado: \"%s\"\n\n", res);
free(res);

printf("=== TEST 4: Caso Borde - Número Cero ===\n");
res = ft_convert_base("0", "0123456789", "0123456789ABCDEF");
printf("Esperado: \"0\" | Resultado: \"%s\"\n\n", res);
free(res);

printf("=== TEST 5: Caso Borde - INT_MIN (-2147483648) ===\n");
res = ft_convert_base("-2147483648", "0123456789", "0123456789");
printf("Esperado: \"-2147483648\" | Resultado: \"%s\"\n\n", res);
free(res);

printf("=== TEST 6: Bases Inválidas (Debe devolver NULL) ===\n");
res = ft_convert_base("42", "0123456789+", "0123456789ABCDEF");
printf("Base con '+': %s\n", (res == NULL) ? "OK (NULL)" : "FAIL");
free(res);

res = ft_convert_base("42", "0123456789", "0123456789AABCDEF");
printf("Base con duplicados: %s\n", (res == NULL) ? "OK (NULL)" : "FAIL");
free(res);

res = ft_convert_base("42", "1", "0123456789");
printf("Base tamaño 1: %s\n", (res == NULL) ? "OK (NULL)" : "FAIL");
free(res);

return (0);
}*/
