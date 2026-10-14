/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_level.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:44:07 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/14 18:52:27 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	compute_disorder(t_to_order *stack_a, t_config *config)
{
	int			mistakes;
	int			total_pairs;
	t_to_order	*current;
	t_to_order	*checker;

	current = stack_a;
	if (!stack_a || current->next == NULL)
		return ;
	mistakes = 0;
	total_pairs = 0;
	while (current != NULL)
	{
		checker = current->next;
		while (checker != NULL)
		{
			if (current->index > checker->index)
				mistakes += 1;
			total_pairs += 1;
			checker = checker->next;
		}
		current = current->next;
	}
	config->disorder = ((mistakes * 10000) / total_pairs);
}
