/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_to_order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:45:34 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/20 03:23:12 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_to_order **stack_a, t_config *config)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;
	if (first > second && first < third)
		exec_op(OP_SA, stack_a, NULL, config);
	else if (first > second && first > third && second < third)
		exec_op(OP_RA, stack_a, NULL, config);
	else if (first < third && second > third)
	{
		exec_op(OP_RRA, stack_a, NULL, config);
		exec_op(OP_SA, stack_a, NULL, config);
	}
	else if (first < second && first > third)
		exec_op(OP_RRA, stack_a, NULL, config);
	else if (first > second && second > third)
	{
		exec_op(OP_SA, stack_a, NULL, config);
		exec_op(OP_RRA, stack_a, NULL, config);
	}
}

void	push_min_to_b(t_to_order **stack_a, t_to_order **stack_b,
	t_config *config)
{
	t_to_order		*min;
	size_t			pos;
	unsigned int	size;

	min = ft_get_min(*stack_a);
	pos = ft_get_pos(*stack_a, min);
	size = stack_size(*stack_a);
	while (*stack_a != min)
	{
		if (pos <= size / 2)
			exec_op(OP_RA, stack_a, NULL, config);
		else
			exec_op(OP_RRA, stack_a, NULL, config);
	}
	if (!ft_is_sort(*stack_a))
		exec_op(OP_PB, stack_a, stack_b, config);
}

static void	sort_five(t_to_order **stack_a, t_to_order **stack_b,
	t_config *config)
{
	unsigned int	size;

	size = stack_size(*stack_a);
	if (size == 4)
	{
		push_min_to_b(stack_a, stack_b, config);
		sort_three(stack_a, config);
		exec_op(OP_PA, stack_a, stack_b, config);
	}
	else
	{
		push_min_to_b(stack_a, stack_b, config);
		push_min_to_b(stack_a, stack_b, config);
		sort_three(stack_a, config);
		exec_op(OP_PA, stack_a, stack_b, config);
		exec_op(OP_PA, stack_a, stack_b, config);
	}
}

static void	minimal_cases_to_order(t_to_order **stack_a,
	t_to_order	**stack_b, unsigned int counter, t_config *config)
{
	if (counter == 2)
		exec_op(OP_SA, stack_a, stack_b, config);
	else if (counter == 3)
		sort_three(stack_a, config);
	else if (counter <= 5)
		sort_five(stack_a, stack_b, config);
}

int	go_to_order(t_config *config, t_to_order **stack_a)
{
	unsigned int	counter;
	t_to_order		*stack_b;

	stack_b = NULL;
	if (config->disorder == 0)
		return (0);
	counter = stack_size(*stack_a);
	if (counter <= 5)
		minimal_cases_to_order(stack_a, &stack_b, counter, config);
	else if (config->strategy == STRAT_SIMPLE)
		ft_simple(stack_a, &stack_b, config);
	else if (config->strategy == STRAT_MEDIUM)
		ft_medium(stack_a, &stack_b, config);
	else if (config->strategy == STRAT_COMPLEX)
		ft_complex(stack_a, &stack_b, config);
	else if (config->strategy == STRAT_ADAPTIVE)
		ft_select_strategy(config, stack_a, &stack_b);
	if (config->bench != 0)
		show_bench(*config);
	return (0);
}
