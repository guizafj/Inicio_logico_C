/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:45:37 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:25:54 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Returns the last node in a list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	print_content(ft_lstlast(list)->content);
	ft_lstclear(&list, NULL);
	return (0);
}*/
