/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:26:15 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/03 17:52:07 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
This function it`s iterative and read, use one file descriptor
*/

static char	*extract_line(char **ptr)
{
	char	*line;
	char	*find_end_line;
	char	*rest;

	if (!ptr)
		return (NULL);
	find_end_line = ft_strchr(*ptr, '\n');
	if (!find_end_line)
		return (*ptr);
	else
	{
		line = ft_substr(*ptr, 0, (find_end_line - *ptr + 1));
		rest = ft_strdup(find_end_line + 1);
		if (rest[0] == '\0')
		{
			free(rest);
			rest = NULL;
		}
		free(*ptr);
		*ptr = rest;
	}
	return (line);
}

static char	*read_and_join(int fd, char *stash)
{
	char	*buffer;
	ssize_t	bytes_read;
	char	*temp;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(stash, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(stash, buffer);
		free(stash);
		stash = temp;
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (stash == NULL)
		stash = ft_strdup("");
	stash = read_and_join(fd, stash);
	if (!stash || *stash == '\0')
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	if (ft_strchr(stash, '\n'))
		line = extract_line(&stash);
	else
	{
		line = ft_strdup(stash);
		free(stash);
		stash = NULL;
	}
	return (line);
}
/*
int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else
		fd = open(argv[1], O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	return (0);
}*/
