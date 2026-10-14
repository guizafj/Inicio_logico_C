/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_structs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:02:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/14 21:03:42 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_to_order	*ft_node_new(int value)
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

void	ft_stack_add_front(t_to_order **stack, t_to_order *new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->next = *stack;
	*stack = new_node;
}

int	ft_has_duplicate(t_to_order *stack, int value)
{
	while (stack != NULL)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	index_stack(t_to_order **stack_a)
{
	t_to_order	*current;
	t_to_order	*checker;
	int			counter;

	current = *stack_a;
	while (current != NULL)
	{
		checker = *stack_a;
		counter = 0;
		while (checker != NULL)
		{
			if (checker->value < current->value)
				counter++;
			checker = checker->next;
		}
		current->index = counter;
		current = current->next;
	}
}

unsigned int	stack_size(t_to_order *stack_a)
{
	unsigned int	count;

	count = 0;
	while (stack_a != NULL)
	{
		stack_a = stack_a->next;
		count++;
	}
	return (count);
}
