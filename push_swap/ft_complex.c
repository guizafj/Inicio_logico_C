/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:49:09 by frgonzal          #+#    #+#             */
/*   Updated: 2026/10/20 19:58:16 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_complex(t_to_order **stack_a, t_to_order **stack_b, t_config *config)
{
	unsigned int	size_a;
	unsigned int	bits;
	unsigned int	bit;
	unsigned int	count;

	size_a = stack_size(*stack_a);
	bits = 0;
	while ((1 << bits) < size_a)
		bits++;
	bit = 0;
	while (bit < bits && !ft_is_sort(*stack_a))
	{
		count = size_a;
		while (count--)
		{
			if ((((*stack_a)->index >> bit) & 1) == 0)
				exec_op(OP_PB, stack_a, stack_b, config);
			else
				exec_op(OP_RA, stack_a, stack_b, config);
		}
		while (!ft_is_empty(*stack_b))
			exec_op(OP_PA, stack_a, stack_b, config);
		bit++;
	}
}
