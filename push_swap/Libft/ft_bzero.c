/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:43:04 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:23:34 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Clears a memory area of the specified size by filling it with zeroes.
*/
void	ft_bzero(void *str, size_t n)
{
	unsigned char	*point;

	point = (unsigned char *)str;
	while (n > 0)
	{
		*point = 0;
		point++;
		n--;
	}
}

/*
int	main(void)
{
    char buffer[10] = "abcdefghi";
    int i;

    ft_bzero(buffer + 2, 4);

    i = 0;
    while (i < 10)
    {
        if (buffer[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", buffer[i]);
        i++;
    }
    printf("\n");
    return (0);
}*/
