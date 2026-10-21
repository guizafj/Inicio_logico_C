/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:29:56 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/20 20:20:52 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <libft.h>

typedef struct s_to_order
{
	int					value;
	int					index;
	struct s_to_order	*next;
}	t_to_order;

int				main(int argc, char **argv);
int				checker_init_stack(int argc, char **argv, t_to_order **stack_a);
int				read_and_process_instructions(t_to_order **stack_a,
					t_to_order **stack_b);
int				execute_checker_op(char *line, t_to_order **stack_a,
					t_to_order **stack_b);
t_to_order		*ft_node_new(int value);
void			ft_stack_add_back(t_to_order **stack, t_to_order *new_node);
int				ft_has_duplicate(t_to_order *stack, int value);
void			ft_free_matrix(char **tokens);
void			ft_stack_clear(t_to_order **stack);
void			ft_stack_add_back(t_to_order **stack, t_to_order *new_node);
void			index_stack(t_to_order **stack_a);
unsigned int	stack_size(t_to_order *stack_a);
char			*ft_join_args(int argc, char **argv);
char			**ft_split_set(char *str, char *charset);
int				ft_atol_safe(const char *nptr, int *out_number);
int				ft_extract_and_load_stack(char **tokens, t_to_order **stack_a);
t_to_order		*ft_stack_last(t_to_order *lst);
void			ft_rotate(t_to_order **stack);
void			ft_reverse_rotate(t_to_order **stack);
void			ft_swap(t_to_order **stack);
void			ft_push(t_to_order **a, t_to_order **b);
int				ft_is_sort(t_to_order *stack);
int				ft_is_empty(t_to_order *stack);

#endif
