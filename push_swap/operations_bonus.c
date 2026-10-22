/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:50:18 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/21 21:22:54 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static	int	apply_swaps_pushes(char *line, t_to_order **stack_a,
				t_to_order **stack_b)
{
	if (ft_strcmp(line, "sa\n") == 0)
		return (ft_swap(stack_a), 0);
	else if (ft_strcmp(line, "sb\n") == 0)
		return (ft_swap(stack_b), 0);
	else if (ft_strcmp(line, "ss\n") == 0)
	{
		ft_swap(stack_a);
		ft_swap(stack_b);
		return (0);
	}
	else if (ft_strcmp(line, "pa\n") == 0)
		return (ft_push(stack_b, stack_a), 0);
	else if (ft_strcmp(line, "pb\n") == 0)
		return (ft_push(stack_a, stack_b), 0);
	return (-1);
}

static int	apply_rotates(char *line, t_to_order **stack_a,
			t_to_order **stack_b)
{
	if (ft_strcmp(line, "ra\n") == 0)
		return (ft_rotate(stack_a), 0);
	else if (ft_strcmp(line, "rb\n") == 0)
		return (ft_rotate(stack_b), 0);
	else if (ft_strcmp(line, "rr\n") == 0)
	{
		ft_rotate(stack_a);
		ft_rotate(stack_b);
		return (0);
	}
	else if (ft_strcmp(line, "rra\n") == 0)
		return (ft_reverse_rotate(stack_a), 0);
	else if (ft_strcmp(line, "rrb\n") == 0)
		return (ft_reverse_rotate(stack_b), 0);
	else if (ft_strcmp(line, "rrr\n") == 0)
	{
		ft_reverse_rotate(stack_a);
		ft_reverse_rotate(stack_b);
		return (0);
	}
	return (-1);
}

int	execute_checker_op(char *line, t_to_order **stack_a,
			t_to_order **stack_b)
{
	if (apply_swaps_pushes(line, stack_a, stack_b) == 0)
		return (0);
	if (apply_rotates(line, stack_a, stack_b) == 0)
		return (0);
	return (-1);
}
