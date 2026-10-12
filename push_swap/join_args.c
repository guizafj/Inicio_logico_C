/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 01:13:24 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/13 00:36:06 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*join_with_space_and_free(char *str1, char *str2)
{
	char	*result;
	char	*temp;

	temp = ft_strjoin(str1, str2);
	free(str1);
	if (!temp)
		return (NULL);
	result = ft_strjoin(temp, " ");
	free(temp);
	if (!result)
		return (NULL);
	return (result);
}

char	*join_args(int argc, char **argv)
{
	char	*point_stack;
	int		index;

	point_stack = ft_strdup("");
	if (!point_stack)
		return (NULL);
	index = 1;
	while (index < argc)
	{
		if (argv[index][0] == '\0')
		{
			free(point_stack);
			return (NULL);
		}
		point_stack = join_with_space_and_free(point_stack, argv[index]);
		if (!point_stack)
			return (NULL);
		index++;
	}
	return (point_stack);
}
