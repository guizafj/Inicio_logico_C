/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 13:53:59 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/23 21:43:43 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  // read, write, close
#include <fcntl.h>   // open, O_RDONLY
#include <errno.h>   // errno
#include <string.h>  // strerror
#include <libgen.h>  // basename

static void	ft_print_buffer(char *buffer, size_t total, int nb)
{
	if (total < (size_t)nb)
		write(1, buffer, total);
	else
	{
		write(1, &buffer[total % nb], nb - (total % nb));
		write(1, &buffer[0], (total % nb));
	}
}

void	ft_read_fd(int fd, char *prog_name, char *file_name, int nb)
{
	char		*buffer;
	char		c;
	ssize_t		bytes_read;
	size_t		total_bytes;

	buffer = malloc(sizeof(char) * (nb));
	if (!buffer)
	{
		ft_print_error(prog_name, file_name);
		return ;
	}
	total_bytes = 0;
	bytes_read = read(fd, &c, 1);
	while (bytes_read > 0)
	{
		buffer[total_bytes % nb] = c;
		total_bytes++;
		bytes_read = read(fd, &c, 1);
	}
	if (bytes_read < 0)
		ft_print_error(prog_name, file_name);
	else
		ft_print_buffer(buffer, total_bytes, nb);
	free(buffer);
}

int	ft_parse_args(int argc, char **argv, int *value, char *prog_name)
{
	int	index;
	int	res;

	res = 50;
	index = 1;
	if (argc == 1)
		index = 1;
	else if ((argv[1][0] == '-' && argv[1][1] == 'c')
			&& argv[1][2] != '\0' )
	{
		index = 2;
		res = ft_check_value(argc, argv, prog_name);
	}
	else if ((argv[1][0] == '-' && argv[1][1] == 'c')
			&& argv[1][2] == '\0')
	{
		index = 3;
		res = ft_check_value(argc, argv, prog_name);
	}
	if (res == -1)
		return (-1);
	else if (res != -1)
		*value = res;
	return (index);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*prog_name;
	int		index;
	int		value;

	prog_name = basename(argv[0]);
	value = 50;
	index = ft_parse_args(argc, argv, &value, prog_name);
	if (index == -1)
		return (1);
	if (argc == 1)
		ft_read_fd(0, prog_name, "", value);
	else if (index < argc)
	{
		while (index < argc)
		{
			fd = open(argv[index], O_RDONLY);
			if (fd < 0)
				ft_print_error(prog_name, argv[index]);
			else if (fd >= 0)
			{
				ft_read_fd(fd, prog_name, argv[index], value);
				close(fd);
			}
			index++;
		}
	}
	return (0);
}

/*prueba de modificación*/
