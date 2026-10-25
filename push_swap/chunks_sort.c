/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:40:18 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/24 22:48:31 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	sqrt = 1;
	while ((sqrt * sqrt && (sqrt <= nb / sqrt)))
		sqrt++;
	return (sqrt - 1);
}

static	void	go_to_b(t_to_order **stack_a, t_to_order **stack_b,
					t_config *config)
{
	unsigned int	total_size;
	int				chunk_size;
	int				count_b;

	total_size = stack_size(*stack_a);
	chunk_size = ft_sqrt((int)total_size);
	count_b = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= count_b)
		{
			exec_op(OP_PB, stack_a, stack_b, config);
			exec_op(OP_RB, stack_a, stack_b, config);
			count_b++;
		}
		else if ((*stack_a)->index <= count_b + chunk_size)
		{
			exec_op(OP_PB, stack_a, stack_b, config);
			count_b++;
		}
		else
			exec_op(OP_RA, stack_a, stack_b, config);
	}
}

static	void	go_to_a(t_to_order **stack_a, t_to_order **stack_b,
					t_config *config)
{
	t_to_order		*max;
	size_t			pos;
	unsigned int	total_size;

	while (*stack_b)
	{
		max = ft_get_max(*stack_b);
		pos = ft_get_pos(*stack_b, max);
		total_size = stack_size(*stack_b);
		if (pos <= total_size / 2)
		{
			while ((*stack_b != max))
				exec_op(OP_RB, stack_a, stack_b, config);
		}
		else
		{
			while ((*stack_b != max))
				exec_op(OP_RRB, stack_a, stack_b, config);
		}
		exec_op(OP_PA, stack_a, stack_b, config);
	}
}

void	ft_medium(t_to_order **stack_a, t_to_order **stack_b, t_config *config)
{
	go_to_b(stack_a, stack_b, config);
	go_to_a(stack_a, stack_b, config);
}
