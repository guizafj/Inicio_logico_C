/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:45:47 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:24:04 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies a function to each content, creating a new resulting list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*new_content;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
static void	*sum(void *content)
{
	int	*result;

	result = malloc(sizeof(int));
	if (!result)
		return (NULL);
	*result = *(int *) content + 4;
	return (result);
}

static void	print_content(void *content)
{
	printf("%d\n", *(int *) content);
}

static void	nothing(void *content)
{
	(void) content;
}

int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*list;
	t_list	*mapped;

	a = 1;
	b = 2;
	c = 3;
	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(&a));
	ft_lstadd_back(&list, ft_lstnew(&b));
	ft_lstadd_back(&list, ft_lstnew(&c));
	mapped = ft_lstmap(list, sum, free);
	ft_lstiter(mapped, print_content);
	ft_lstclear(&mapped, free);
	ft_lstclear(&list, nothing);
	return (0);
}*/
