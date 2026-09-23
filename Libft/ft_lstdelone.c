/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:45:14 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 14:23:42 by fradiaz          ###   ########.fr       */
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
static void	nothing(void *content)
{
	(void) content;
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("uno");
	ft_lstdelone(node, nothing);
	printf("Nodo eliminado correctamente\n");
	return (0);
}*/
