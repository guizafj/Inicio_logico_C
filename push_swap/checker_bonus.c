/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:19:38 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/20 20:32:45 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static	void	check_result(t_to_order *stack_a, t_to_order *stack_b)
{
	if (!ft_is_sort(stack_a) || (!ft_is_empty(stack_b)))
		ft_dprintf(1, "KO\n");
	else
		ft_dprintf(1, "OK\n");
}

int	main(int argc, char **argv)
{
	t_to_order	*stack_a;
	t_to_order	*stack_b;

	if (argc < 2)
		return (0);
	stack_b = NULL;
	if (checker_init_stack(argc, argv, &stack_a) == -1)
	{
		ft_dprintf(2, "Error\n");
		return (-1);
	}
	if (read_and_process_instructions(stack_a, stack_b) == -1)
	{
		ft_stack_clear(&stack_a);
		ft_stack_clear(&stack_b);
		ft_dprintf(2, "Error\n");
		return (-1);
	}
	check_result(stack_a, stack_b);
	ft_stack_clear(&stack_a);
	ft_stack_clear(&stack_b);
	return (0);
}
