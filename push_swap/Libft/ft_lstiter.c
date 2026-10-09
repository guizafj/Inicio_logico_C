/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:45:24 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:25:42 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates over a list, applying a function to each node's content.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
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
	ft_lstadd_back(&list, ft_lstnew(&a));
	ft_lstadd_back(&list, ft_lstnew(&b));
	ft_lstadd_back(&list, ft_lstnew(&c));
	ft_lstiter(list, print_content);
	ft_lstclear(&list, NULL);
	return (0);
}*/
