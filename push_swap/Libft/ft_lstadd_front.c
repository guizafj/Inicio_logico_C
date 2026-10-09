/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:44:50 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:25:26 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Adds a node to the beginning of a list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
static void	check_test(int condition, char *message)
{
	if (condition)
		printf("[OK] %s\n", message);
	else
	{
		printf("[FAIL] %s\n", message);
		exit(EXIT_FAILURE);
	}
}

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_lstadd_front(&list, ft_lstnew("uno"));
	ft_lstadd_front(&list, ft_lstnew("dos"));
	check_test(list != NULL, "La lista no es NULL");
	check_test(ft_strncmp(list->content, "dos", sizeof("dos") + 1) == 0,
		"El último nodo añadido está al principio");
	check_test(ft_strncmp(list->next->content, "dos",
			sizeof("dos") + 1) == 0,
		"El nodo anterior queda después");
	check_test(list->next->next == NULL,
		"El último nodo termina la lista");
	free(list->next);
	free(list);
}*/
