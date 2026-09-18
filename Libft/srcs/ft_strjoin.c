/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 17:09:12 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/18 11:55:34 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	index_s1;
	size_t	index_s2;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	index_s1 = 0;
	while (s1[index_s1])
	{
		ptr[index_s1] = s1[index_s1];
		index_s1++;
	}
	index_s2 = 0;
	while (s2[index_s2])
	{
		ptr[index_s1 + index_s2] = s2[index_s2];
		index_s2++;
	}
	ptr[index_s1 + index_s2] = '\0';
	return (ptr);
}
/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * (total_len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, total_len + 1);
	ft_strlcat(ptr, s2, total_len + 1);
	return (ptr);
}
*/
