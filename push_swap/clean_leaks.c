/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_leaks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:08:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/12 13:10:42 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_matrix(char **tokens)
{
	int	index;

	index = 0;
	while (tokens[index] != NULL)
	{
		free(tokens[index]);
		index++;
	}
	free(tokens);
}
