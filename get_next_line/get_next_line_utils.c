/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:26:13 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/03 15:43:08 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

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

char	*ft_strdup(const char *str)
{
	size_t	length;
	char	*ptr;

	length = ft_strlen(str);
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);
	length = 0;
	while (str[length])
	{
		ptr[length] = str[length];
		length++;
	}
	ptr[length] = '\0';
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*dst;

	index = 0;
	while (s[index] != (char) c && s[index] != '\0')
		index++;
	if (s[index] == (char) c)
		dst = (char *) & s[index];
	else
		dst = (void *) 0;
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	index;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < len && s[start + index])
	{
		ptr[index] = s[start + index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
