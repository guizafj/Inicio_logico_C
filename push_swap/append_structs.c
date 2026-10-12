/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_structs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:02:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/12 21:43:20 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_to_order	*stack_last(t_to_order *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_to_order	*node_new(int value)
{
	t_to_order	*new_node;

	new_node = malloc(sizeof(t_to_order));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

void	stack_add_back(t_to_order **stack, t_to_order *new_node)
{
	t_to_order	*last;

	if (!stack || !new_node)
		return ;
	if (*stack == NULL)
		*stack = new_node;
	else
	{
		last = stack_last(*stack);
		last->next = new_node;
	}
}

void	stack_clear(t_to_order **stack)
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

int	has_duplicate(t_to_order *stack, int value)
{
	while (stack != NULL)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}



