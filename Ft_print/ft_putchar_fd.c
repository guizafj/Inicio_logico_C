/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:47:33 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/27 11:35:35 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
Writes character c to a file descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
