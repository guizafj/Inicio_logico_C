/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_implement.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 20:22:17 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/20 03:16:37 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_select_strategy(t_config *config, t_to_order **stack_a,
					t_to_order	**stack_b)
{
	if (config->disorder < 2000)
		ft_simple(stack_a, stack_b, config);
	else if (config->disorder >= 2000 && config->disorder < 5000)
		ft_medium(stack_a, stack_b, config);
	else
		ft_complex(stack_a, stack_b, config);
}

void	ft_simple(t_to_order **stack_a, t_to_order **stack_b, t_config *config)
{
	while (!ft_is_sort(*stack_a))
		push_min_to_b(stack_a, stack_b, config);
	while (stack_size(*stack_b))
		exec_op(OP_PA, stack_a, stack_b, config);
}
