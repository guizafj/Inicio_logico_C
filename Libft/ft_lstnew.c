/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:46:05 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:26:08 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Creates a new node, allocating memory and storing its content.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
static void	print_content(void *content)
{
	printf("%d\n", *(int *) content);
}

int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*list;

	a = 1;
	b = 2;
	c = 3;
	list = NULL;
	ft_lstadd_front(&list, ft_lstnew(&a));
	ft_lstadd_back(&list, ft_lstnew(&b));
	ft_lstadd_front(&list, ft_lstnew(&c));
	ft_lstiter(list, print_content);
	ft_lstclear(&list, NULL);
	return (0);
}*/
