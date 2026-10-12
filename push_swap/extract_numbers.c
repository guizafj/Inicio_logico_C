/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:13:39 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/13 00:00:29 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atol_safe(const char *nptr, int *out_number)
{
	long	result;
	int		index;
	int		sign;

	index = 0;
	sign = 1;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	result = 0;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result = result * 10 + (nptr[index] - '0');
		if (result > (long)INT_MAX + 1)
			return (-1);
		index++;
	}
	if ((result * sign) < INT_MIN || (result * sign) > INT_MAX)
		return (-1);
	*out_number = result * sign;
	return (0);
}

static int	process_number_token(char *token, t_to_order **stack_a)
{
	int			nbr;
	t_to_order	*new_node;

	if (ft_atol_safe(token, &nbr) == -1
		|| has_duplicate(*stack_a, nbr) == 1)
	{
		stack_clear(stack_a);
		return (-1);
	}
	new_node = node_new(nbr);
	if (!new_node)
	{
		stack_clear(stack_a);
		return (-1);
	}
	stack_add_back(stack_a, new_node);
	return (0);
}

int	extract_and_load_stack(char **tokens, t_to_order **stack_a)
{
	int			len;

	len = 0;
	while (tokens[len] != NULL)
	{
		if (what_is_in_this_position(tokens[len]) != 2)
			len++;
		else
		{
			if (process_number_token(tokens[len], stack_a) == -1)
				return (-1);
			len++;
		}
	}
	return (0);
}

