/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 13:53:59 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/01 12:29:35 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 28672
#include <unistd.h>  // read, write, close
#include <fcntl.h>   // open, O_RDONLY
#include <errno.h>   // errno
#include <string.h>  // strerror
#include <libgen.h>  // basename

void	ft_putstr_fd(char *str, int fd)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(fd, str, len);
}

void	print_error(char *prog_name, char *file_name)
{
	ft_putstr_fd(prog_name, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(file_name, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(strerror(errno), 2);
	ft_putstr_fd("\n", 2);
}

void	ft_read_fd(int fd, char *prog_name, char *file_name)
{
	char		buffer[BUF_SIZE];
	ssize_t		bytes_read;

	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read < 0)
		print_error(prog_name, file_name);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*prog_name;
	int		i;

	prog_name = basename(argv[0]);
	if (argc == 1)
		ft_read_fd(0, prog_name, "");
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
				print_error(prog_name, argv[i]);
			else if (fd >= 0)
			{
				ft_read_fd(fd, prog_name, argv[i]);
				close(fd);
			}
			i++;
		}
	}
	return (0);
}
