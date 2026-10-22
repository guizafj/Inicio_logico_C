/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:45:35 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/21 18:33:06 by fradiaz          ###   ########.fr       */
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

void			ft_medium(t_to_order **stack_a, t_to_order **stack_b,
					t_config *config);
void			ft_free_matrix(char **tokens);
void			ft_stack_clear(t_to_order **stack);
void			init_config(t_config *config);
int				ft_validate_flags(char *str, t_config *config);
void			record_op(t_op op, t_config *config);
int				op_count(t_config config);
void			print_op(t_op op);
void			show_bench(t_config config);
int				ft_atol_safe(const char *nptr, int *out_number);
int				ft_extract_and_load_stack(char **tokens, t_to_order **stack_a);
char			**ft_split_set(char *str, char *charset);
void			push_min_to_b(t_to_order **stack_a, t_to_order **stack_b,
					t_config *config);
int				go_to_order(t_config *config, t_to_order **stack_a);
char			*ft_join_args(int argc, char **argv);
void			exec_op(t_op op, t_to_order **stack_a, t_to_order **stack_b,
					t_config *config);
int				ft_orchestating_function(int argc, char **argv,
					t_config *config, t_to_order **stack_a);
void			compute_disorder(t_to_order *stack_a, t_config *config);
t_to_order		*ft_get_max(t_to_order *stack);
t_to_order		*ft_get_min(t_to_order *stack);
size_t			ft_get_pos(t_to_order *stack, t_to_order *min);
int				ft_is_sort(t_to_order *stack);
int				ft_is_empty(t_to_order *stack);
t_to_order		*ft_stack_last(t_to_order *stack);
void			ft_rotate(t_to_order **stack);
void			ft_reverse_rotate(t_to_order **stack);
void			ft_swap(t_to_order **stack);
void			ft_push(t_to_order **a, t_to_order **b);
t_to_order		*ft_node_new(int value);
void			ft_stack_add_back(t_to_order **stack, t_to_order *new_node);
int				ft_has_duplicate(t_to_order *stack, int value);
void			index_stack(t_to_order **stack_a);
unsigned int	stack_size(t_to_order *stack_a);
int				ft_what_in_position(char *pos);
int				ft_is_valid_input(char **tokens, t_config *config);
void			ft_simple(t_to_order **stack_a, t_to_order **stack_b,
					t_config *config);
void			ft_medium(t_to_order **stack_a, t_to_order **stack_b,
					t_config *config);
void			ft_complex(t_to_order **stack_a, t_to_order **stack_b,
					t_config *config);
void			ft_select_strategy(t_config *config, t_to_order **stack_a,
					t_to_order **stack_b);
char			**get_cleaned_tokens(int argc, char **argv);
int				is_valid_number_format(char *nbr);

#endif
