/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:55:08 by fradiaz           #+#    #+#             */
/*   Updated: 2026/08/28 18:29:43 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 4096
#include <unistd.h>
#include <fcntl.h>

void	ft_read_file(int fd)
{
	char		buffer[BUF_SIZE];
	ssize_t		bytes_read;

	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
	if (bytes_read < 0)
		write(2, "Cannot read file.\n", 18);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc == 1)
		{
			write(2, "File name missing.\n", 19);
			return (0);
		}
		else if (argc > 2)
		{
			write(2, "Too many arguments.\n", 20);
			return (0);
		}
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	ft_read_file(fd);
	close(fd);
	return (0);
}
