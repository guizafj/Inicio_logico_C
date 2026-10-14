/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_leaks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:08:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/13 23:20:22 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_matrix(char **tokens)
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

void	ft_stack_clear(t_to_order **stack)
{
	t_to_order	*temp;

	if (!stack)
		return ;
	while (*stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
	*stack = NULL;
}
