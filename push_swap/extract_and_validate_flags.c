/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_and_validate_flags.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:34:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/12 22:01:22 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	set_strategy(t_config *config, t_strategy strat)
{
	if (config->strategy != STRAT_NONE)
		return (-1);
	config->strategy = strat;
	return (0);
}

static int	set_bench(t_config *config, int bench)
{
	if (config->bench != 0)
		return (-1);
	config->bench = bench;
	return (0);
}

int	validate_flags(char *str, t_config *config)
{
	if (ft_strcmp(str, "--simple") == 0)
		return (set_strategy(config, STRAT_SIMPLE));
	else if (ft_strcmp(str, "--medium") == 0)
		return (set_strategy(config, STRAT_MEDIUM));
	else if (ft_strcmp(str, "--complex") == 0)
		return (set_strategy(config, STRAT_COMPLEX));
	else if (ft_strcmp(str, "--adaptive") == 0)
		return (set_strategy(config, STRAT_ADAPTIVE));
	else if (ft_strcmp(str, "--bench") == 0)
		return (set_bench(config, 1));
	return (-1);
}
