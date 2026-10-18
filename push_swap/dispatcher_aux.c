/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher_aux.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 23:25:19 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/18 13:30:55 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	record_op(t_op op, t_config *config)
{
	if (op >= OP_COUNT || op < 0 || !config)
		return ;
	config->op_counts[op] += 1;
}

int	op_count(t_config config)
{
	int	index;
	int	total_ops;

	index = 0;
	total_ops = 0;
	while (index < OP_COUNT)
	{
		total_ops += config.op_counts[index];
		index++;
	}
	return (total_ops);
}

