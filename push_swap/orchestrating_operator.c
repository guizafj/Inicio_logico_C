/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orchestrating_operator.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:11:23 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/12 23:16:31 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**get_cleaned_tokens(int argc, char **argv)
{
	char	*raw_args;
	char	**tokens;

	raw_args = join_args(argc, argv);
	if (!raw_args)
		return (NULL);
	tokens = ft_split_set(raw_args, "\t\n\v\f\r ");
	free(raw_args);
	if (!tokens)
		return (NULL);
	if (tokens[0] == NULL)
	{
		free_matrix(tokens);
		return (NULL);
	}
	return (tokens);
}

int	orchestrating_function(int argc, char **argv, t_config *config)
{
	char		**tokens;
	t_to_order	*stack_a;

	stack_a = NULL;
	tokens = get_cleaned_tokens(argc, argv);
	if (!tokens)
		return (-1);
	if (is_valid_input(tokens, config) == -1)
		return (free_matrix(tokens), -1);
	if (extract_and_load_stack(tokens, &stack_a) == -1)
	{
		free_matrix(tokens);
		return (-1);
	}
	free_matrix(tokens);
	if (!stack_a)
		return (-1);
	return (0);
}
