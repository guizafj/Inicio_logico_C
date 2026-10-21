/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:21:16 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/20 00:52:19 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*get_op_name(t_op op)
{
	if (op == OP_SA)
		return ("sa");
	if (op == OP_SB)
		return ("sb");
	if (op == OP_SS)
		return ("ss");
	if (op == OP_PA)
		return ("pa");
	if (op == OP_PB)
		return ("pb");
	if (op == OP_RA)
		return ("ra");
	if (op == OP_RB)
		return ("rb");
	if (op == OP_RR)
		return ("rr");
	if (op == OP_RRA)
		return ("rra");
	if (op == OP_RRB)
		return ("rrb");
	if (op == OP_RRR)
		return ("rrr");
	return (NULL);
}

void	print_op(t_op op)
{
	if (op >= OP_COUNT || op < 0)
		return ;
	ft_putendl_fd(get_op_name(op), 1);
}

static char	*get_strategy_name(t_config config)
{
	if (config.strategy == STRAT_SIMPLE)
		return ("Simple / O(n²)");
	if (config.strategy == STRAT_MEDIUM)
		return ("Medium / O(n√n)");
	if (config.strategy == STRAT_COMPLEX)
		return ("Complex / O(n log n)");
	if (config.strategy == STRAT_ADAPTIVE)
	{
		if (config.disorder < 2000)
			return ("Adaptive / O(n²)");
		else if (config.disorder < 5000)
			return ("Adaptive / O(n√n)");
		else
			return ("Adaptive / O(n log n)");
	}
	return (NULL);
}

void	show_bench(t_config config)
{
	int	int_part;
	int	dec_part;
	int	index;

	int_part = config.disorder / 100;
	dec_part = config.disorder % 100;
	index = 0;
	ft_dprintf(2, "[bench] disorder: ");
	if (dec_part < 10)
		ft_dprintf(2, "%d.0%d%%\n", int_part, dec_part);
	else
		ft_dprintf(2, "%d.%d%%\n", int_part, dec_part);
	ft_dprintf(2, "[bench] strategy: %s\n", get_strategy_name(config));
	ft_dprintf(2, "[bench] total_ops: %i", op_count(config));
	while (index < OP_COUNT)
	{
		if (index == 0 || index == 5)
			ft_dprintf(2, "\n[bench] ");
		ft_dprintf(2, "%s: %i ", get_op_name(index), config.op_counts[index]);
		index++;
	}
}
