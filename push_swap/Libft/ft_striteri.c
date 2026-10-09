/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:13 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 10:16:51 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies a function directly to each character of a string.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
/*
static void	to_upper(unsigned int index, char *character)
{
	(void) index;
	if (*character >= 'a' && *character <= 'z')
		*character -= 'a' - 'A';
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_striteri(argv[1], to_upper);
	if (ft_strncmp(argv[1], "HOLA MUNDO", sizeof(char)) == 0)
	{
		printf("[OK] Convierte la cadena a mayusculas\n");
		printf("%s ", argv[1]);
	}
	else
		printf("[FAIL] Resultado: %s\n", argv[1]);
	return (0);
}*/
