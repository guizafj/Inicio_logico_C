/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bridge.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:30:31 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/18 15:02:46 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	apply_swaps_pushes(t_op op, t_to_order **stack_a,
				t_to_order **stack_b)
{
	if (op == OP_SA)
		ft_swap(stack_a);
	else if (op == OP_SB)
		ft_swap(stack_b);
	else if (op == OP_SS)
	{
		ft_swap(stack_a);
		ft_swap(stack_b);
	}
	else if (op == OP_PA)
		ft_push(stack_b, stack_a);
	else if (op == OP_PB)
		ft_push(stack_a, stack_b);
}

static void	apply_rotates(t_op op, t_to_order **stack_a, t_to_order **stack_b)
{
	if (op == OP_RA)
		ft_rotate(stack_a);
	else if (op == OP_RB)
		ft_rotate(stack_b);
	else if (op == OP_RR)
	{
		ft_rotate(stack_a);
		ft_rotate(stack_b);
	}
	else if (op == OP_RRA)
		ft_reverse_rotate(stack_a);
	else if (op == OP_RRB)
		ft_reverse_rotate(stack_b);
	else if (op == OP_RRR)
	{
		ft_reverse_rotate(stack_a);
		ft_reverse_rotate(stack_b);
	}
}

void	exec_op(t_op op, t_to_order **stack_a, t_to_order **stack_b,
				t_config *config)
{
	if (op <= OP_PB)
		apply_swaps_pushes(op, stack_a, stack_b);
	else
		apply_rotates(op, stack_a, stack_b);
	record_op(op, config);
	if (config->bench == 0)
		print_op(op);
}
