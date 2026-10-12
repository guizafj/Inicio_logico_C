/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:10:33 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/12 13:59:52 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_config	config;

	if (argc < 2)
		return (0);
	config.strategy = STRAT_NONE;
	config.bench = 0;
	if (orchestrating_function(argc, argv, &config) == -1)
	{
		ft_dprintf(2, "Error\n");
		return (-1);
	}
	if (config.strategy == STRAT_NONE)
		config.strategy = STRAT_ADAPTIVE;
	return (0);
}
