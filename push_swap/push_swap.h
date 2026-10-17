/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:45:35 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/15 18:35:35 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

typedef enum e_op
{
	OP_SA,
	OP_SB,
	OP_SS,
	OP_PA,
	OP_PB,
	OP_RA,
	OP_RB,
	OP_RR,
	OP_RRA,
	OP_RRB,
	OP_RRR,
	OP_COUNT
}	t_op;

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
	int			disorder;
	int			op_counts[OP_COUNT];
}	t_config;

typedef struct s_to_order
{
	int					value;
	int					index;
	struct s_to_order	*next;
}	t_to_order;

char		**ft_split_set(char *str, char *charset);
char		*ft_join_args(int argc, char **argv);
void		ft_free_matrix(char **tokens);
int			ft_validate_flags(char *str, t_config *config);
int			ft_atol_safe(const char *nptr, int *out_number);
int			ft_orchestating_function(int argc, char **argv, t_config *config,
				t_to_order **stack_a);
int			ft_is_valid_input(char **tokens, t_config *config);
int			ft_what_in_position(char *pos);
int			ft_extract_and_load_stack(char **tokens, t_to_order **stack_a);
t_to_order	*ft_stack_last(t_to_order *stack);
void		ft_stack_add_front(t_to_order **stack, t_to_order *new_node);
void		ft_stack_clear(t_to_order **stack);
int			ft_has_duplicate(t_to_order *stack, int value);
void		index_stack(t_to_order **stack_a);
t_to_order	*ft_node_new(int value);

#endif
