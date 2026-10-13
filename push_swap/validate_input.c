/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:12:48 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/13 01:39:12 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_number_format(char *nbr)
{
	int	index;

	index = 0;
	if (nbr[index] == '-' || nbr[index] == '+')
		index++;
	while (nbr[index])
	{
		if (ft_isdigit(nbr[index]) != 1)
			return (-1);
		index++;
	}
	return (0);
}

int	what_is_in_this_position(char *pos)
{
	if (pos[0] == '-' && pos[0 + 1] == '-')
		return (1);
	else if ((pos[0] == '-' && ft_isdigit(pos[0 + 1]) == 1)
		|| ft_isdigit(pos[0]) || (pos[0] == '+' && ft_isdigit(pos[1]) == 1))
		return (2);
	else
		return (-1);
}

static int	check_identifier(int identifier, char *argv, t_config *config)
{
	if (identifier == 1)
		return (validate_flags(argv, config));
	else if (identifier == 2)
		return (is_valid_number_format(argv));
	return (-1);
}

int	is_valid_input(char **tokens, t_config *config)
{
	int	index;
	int	identifier;

	index = 0;
	while (tokens[index] != NULL)
	{
		identifier = check_identifier(what_is_in_this_position(tokens[index]),
				tokens[index], config);
		if (identifier == -1)
			return (-1);
		index++;
	}
	return (0);
}
