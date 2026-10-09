/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:50:49 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/24 09:51:02 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Removes the characters specified in set from the beginning and end of a string.
*/
static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set) == 1)
		end--;
	new_s1 = ft_substr(s1, start, (end - start));
	return (new_s1);
}
/*
int	main(int argc, char **argv)
{
	char	*result;

	if (argc != 3)
		return (1);
	result = ft_strtrim(argv[1], argv[2]);
	if (!result)
		return (1);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
