/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:45:14 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 10:26:00 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Frees a node's content and the node itself using an external function.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
static int	del_called;

static void	del_content(void *content)
{
	del_called++;
	free(content);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("uno"));
	if (!node)
		return (1);
	ft_lstdelone(node, del_content);
	if (del_called == 1)
		printf("[OK] del fue llamada una vez\n");
	else
		printf("[FAIL] del no fue llamada correctamente\n");
	return (0);
}*/
