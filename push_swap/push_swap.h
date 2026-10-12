/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:45:35 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/13 00:05:04 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

typedef enum e_strategy
{
	STRAT_NONE,
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX,
	STRAT_ADAPTIVE
}	t_strategy;

typedef struct s_config
{
	t_strategy	strategy;
	int			bench;
}	t_config;

typedef struct s_to_order
{
	int					value;
	int					index;
	struct s_to_order	*next;
}	t_to_order;

char		**ft_split_set(char *str, char *charset);
char		*join_args(int argc, char **argv);
void		free_matrix(char **tokens);
int			validate_flags(char *str, t_config *config);
int			ft_atol_safe(const char *nptr, int *out_number);
int			orchestrating_function(int argc, char **argv, t_config *config);
int			is_valid_input(char **tokens, t_config *config);
int			what_is_in_this_position(char *pos);
int			extract_and_load_stack(char **tokens, t_to_order **stack_a);
t_to_order	*stack_last(t_to_order *stack);
void		stack_add_back(t_to_order **stack, t_to_order *new_node);
void		stack_clear(t_to_order **stack);
int			has_duplicate(t_to_order *stack, int value);
t_to_order	*node_new(int value);

#endif
