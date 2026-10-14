/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 01:34:11 by frgonzal          #+#    #+#             */
/*   Updated: 2026/10/14 21:07:25 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_to_order	*ft_stack_last(t_to_order *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_to_order	*ft_rotate(t_to_order *stack)
{
	t_to_order	*last;
	t_to_order	*second;

	if (!stack || !stack->next)
		return (stack);
	last = ft_stack_last(stack);
	second = stack->next;
	last->next = stack;
	stack->next = NULL;
	return (second);
}

t_to_order	*ft_reverse_rotate(t_to_order *stack)
{
	t_to_order	*last;
	t_to_order	*penultimate;

	if (!stack || !stack->next)
		return (stack);
	last = ft_stack_last(stack);
	penultimate = stack;
	while (penultimate->next->next)
		penultimate = penultimate->next;
	penultimate->next = NULL;
	last->next = stack;
	return (last);
}

t_to_order	*ft_swap(t_to_order *stack)
{
	t_to_order	*first;
	t_to_order	*second;

	if (!stack || !stack->next)
		return (stack);
	first = stack;
	second = stack->next;
	stack = stack->next->next;
	second->next = first;
	first->next = stack;
	return (second);
}

void	ft_push(t_to_order **a, t_to_order **b)
{
	t_to_order	*temp;

	if (!a || !b || !*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
}
