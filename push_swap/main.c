/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:10:33 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/18 19:46:29 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_config	config;
	t_to_order	*stack_a;

	if (argc < 2)
		return (0);
	init_config(&config);
	if (ft_orchestating_function(argc, argv, &config, &stack_a) == -1)
	{
		ft_dprintf(2, "Error\n");
		return (-1);
	}
	if (go_to_order(&config, &stack_a) == -1)
	{
		ft_dprintf(2, "Error\n");
		return (-1);
	}
	ft_stack_clear(&stack_a);
	return (0);
}
