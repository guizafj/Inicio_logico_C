/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:43:14 by fradiaz           #+#    #+#             */
/*   Updated: 2026/10/04 22:05:41 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*
This function it`s iterative and read, use one file descriptor or several
file descriptors
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
	static char	*stash[1024];
	char		*line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	if (stash[fd] == NULL)
		stash[fd] = ft_strdup("");
	stash[fd] = read_and_join(fd, stash[fd]);
	if (!stash[fd] || *stash[fd] == '\0')
	{
		free(stash[fd]);
		stash[fd] = NULL;
		return (NULL);
	}
	if (ft_strchr(stash[fd], '\n'))
		line = extract_line(&stash[fd]);
	else
	{
		line = ft_strdup(stash[fd]);
		free(stash[fd]);
		stash[fd] = NULL;
	}
	return (line);
}
/*
# include <stdio.h>
# include <fcntl.h>
int	main(void)
{
	char	*line1;
	char	*line2;
	int		fd2;
	int		fd1;

	fd1 = open("get_next_line.c", O_RDONLY);
	fd2 = open("get_next_line.h", O_RDONLY);
	while ((line1 = get_next_line(fd1)) != NULL
			&& (line2 = get_next_line(fd2)) != NULL)
	{
		printf("%s", line1);
		free(line1);
		printf("%s", line2);
		free(line2);
	}
	return (0);
}*/
