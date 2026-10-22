/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:29:56 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/21 18:32:55 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "push_swap.h"

int	execute_checker_op(char *line, t_to_order **stack_a,
		t_to_order **stack_b);
int	checker_init_stack(int argc, char **argv, t_to_order **stack_a);
int	read_and_process_instructions(t_to_order **stack_a, t_to_order **stack_b);

#endif
