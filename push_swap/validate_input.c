/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:12:48 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/09 22:57:06 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_validad_input(int argc, char **argv)
{
	int	index;
	int	identifier;

	if (argc == 1)
		return (-1);
	if (argc != 1)
	{
		while (index < argc)
		{
			identifier = what_is_in_position(argv[index]);
			if (identifier == 1)
				validate_flags(argv[index]);
			else if (identifier == 2)

			index++;
		}
	}
	return (0);
}

int	what_is_in_position(char *pos)
{
	int	index;
	int	flag;

	index = 0;
	flag = 0;
	while (pos[index])
	{
		if (pos[index] == '-')
			flag = 1;
		else if (ft_isdigit(pos[index]))
			flag = 2;
		index++;
	}
	return (flag);
}

char	*validate_flags(char *str)
{
	(void) str;
	return ((void *) 0);
}

char	*join_numbers(char *str)
{
	int		index;
	char	*point_stack;

	
}
