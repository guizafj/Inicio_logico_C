/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:46:16 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:26:17 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts the number of nodes in a list.
*/
unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
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
	printf("El tamaño es: %d ", ft_lstsize(list));
	ft_lstclear(&list, NULL);
	return (0);
}*/
