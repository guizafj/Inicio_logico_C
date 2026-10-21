/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 23:43:17 by frgonzal          #+#    #+#             */
/*   Updated: 2026/10/20 12:10:36 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_to_order	*ft_get_min(t_to_order *stack)
{
	t_to_order	*min;

	if (!stack)
		return (NULL);
	min = stack;
	while (stack)
	{
		if (min->index > stack->index)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_to_order	*ft_get_max(t_to_order *stack)
{
	t_to_order	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack)
	{
		if (max->index < stack->index)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

size_t	ft_get_pos(t_to_order *stack, t_to_order *value)
{
	size_t	pos;

	pos = 0;
	while (stack != value)
	{
		pos++;
		stack = stack->next;
	}
	return (pos);
}

int	ft_is_sort(t_to_order *stack)
{
	while (stack)
	{
		if (stack->next && stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_is_empty(t_to_order *stack)
{
	if (!stack)
		return (1);
	return (0);
}
