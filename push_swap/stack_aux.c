/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 23:43:17 by frgonzal          #+#    #+#             */
/*   Updated: 2026/10/17 20:33:41 by frgonzal         ###   ########.fr       */
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

size_t	ft_get_min_pos(t_to_order *stack, t_to_order *min)
{
	size_t	pos;

	pos = 0;
	while (stack != min)
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
