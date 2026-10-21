/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orquestating_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:49:34 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/20 19:47:54 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static	int	checker_input(char **tokens)
{
	int	index;

	index = 0;
	while (tokens[index])
	{
		if ((ft_what_in_position(tokens[index]) != 2)
			|| (is_valid_number_format(tokens[index]) != 0))
			return (-1);
		index++;
	}
	return (0);
}

int	checker_init_stack(int argc, char **argv, t_to_order **stack_a)
{
	char	**tokens;

	*stack_a = NULL;
	tokens = get_cleaned_tokens(argc, argv);
	if (!tokens)
		return (-1);
	if (checker_input(tokens) == -1)
		return (ft_free_matrix(tokens), -1);
	if (ft_extract_and_load_stack(tokens, stack_a) == -1)
	{
		ft_free_matrix(tokens);
		return (-1);
	}
	ft_free_matrix(tokens);
	if (!stack_a)
		return (0);
	return (0);
}

int	read_and_process_instructions(t_to_order **stack_a, t_to_order **stack_b)
{
	char	*line;

	while (1)
	{
		line = ft_get_next_line(0);
		if (!line)
			break ;
		if (execute_checker_op(line, stack_a, stack_b) == -1)
		{
			free(line);
			return (-1);
		}
		free(line);
	}
	return (0);
}
