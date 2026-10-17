/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_to_order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:45:34 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/15 21:53:37 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	go_to_order(t_config *config, t_to_order **stack_a)
{
	unsigned int	counter;
	t_to_order		*stack_b;

	stack_b = NULL;
	if (config->disorder == 0)
		return (0);
	counter = stack_size(stack_a);
	if (counter == 2)
		ft_swap(stack_a);
	ft_stack_clear(&stack_b);
	return (0);
}
