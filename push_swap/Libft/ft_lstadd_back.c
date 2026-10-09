/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:44:43 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:25:15 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Adds a node to the end of a list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
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
	ft_lstadd_back(&list, ft_lstnew("uno"));
	check_test(list != NULL, "Se crea el primer nodo");
	check_test(list->next == NULL, "El primer nodo termina la lista");
	check_test(ft_strncmp((char *) list->content, "uno",
			sizeof("uno") + 1) == 0,
		"El contenido del primer nodo es correcto");
	ft_lstadd_back(&list, ft_lstnew("dos"));
	check_test(list->next != NULL, "Se añade el segundo nodo");
	check_test(ft_strncmp((char *) list->next->content, "dos",
			sizeof("dos") + 1) == 0,
		"El contenido del segundo nodo es correcto");
	check_test(list->next->next == NULL,
		"El segundo nodo termina la lista");
	free(list->next);
	free(list);
	return (0);
}*/
