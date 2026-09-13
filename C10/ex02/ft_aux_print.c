/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 13:05:51 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/03 19:22:37 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putstr_fd(char *str, int fd)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	write(fd, str, len);
}

void    ft_print_error(char *prog_name, char *file_name)
{
	ft_putstr_fd(prog_name, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(file_name, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(strerror(errno), 2);
	ft_putstr_fd("\n", 2);
}

void	ft_print_arg_error(char *prog_name, char *argv)
{
	ft_putstr_fd(prog_name, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd("número de bytes no válido: <<", 2);
	ft_putstr_fd(argv, 2);
	ft_putstr_fd(">>\n", 2);
}

void	ft_print_arg_requires(char *prog_name)
{
	ft_putstr_fd(prog_name, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd("la opción requiere un argumento.\n", 2);
}
