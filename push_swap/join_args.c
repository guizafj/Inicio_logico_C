/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 01:13:24 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/13 23:19:07 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_all_spaces(char *str)
{
	size_t	spaces;
	int		index;

	spaces = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == ' ')
			spaces++;
		index++;
	}
	if (spaces == ft_strlen(str))
		return (-1);
	return (0);
}

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

char	*ft_join_args(int argc, char **argv)
{
	char	*point_stack;
	int		index;

	point_stack = ft_strdup("");
	if (!point_stack)
		return (NULL);
	index = 1;
	while (index < argc)
	{
		if (is_all_spaces(argv[index]) == -1)
		{
			free(point_stack);
			return (NULL);
		}
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
