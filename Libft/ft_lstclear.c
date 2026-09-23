/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:45:06 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:25:35 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes and frees all nodes in a list from a given node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
static void	check_test(int condition, const char *message)
{
	if (condition)
		printf("[OK] %s\n", message);
	else
		printf("[FAIL] %s\n", message);
}

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("uno")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("dos")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("tres")));
	check_test(list != NULL, "La lista contiene nodos");
	check_test(list->next != NULL, "Existe el segundo nodo");
	check_test(list->next->next != NULL, "Existe el tercer nodo");
	ft_lstclear(&list, free);
	check_test(list == NULL, "La lista queda vacia");
	return (0);
}*/
