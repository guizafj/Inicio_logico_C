/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_to_order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:45:34 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/14 21:11:20 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	go_to_order(t_config *config, t_to_order **stack_a)
{
	unsigned int	counter;

	if (config->disorder == 0)
		return (0);
	counter = stack_size(stack_a);
	if (counter == 2)
		ft_swap(stack_a);
	
}
