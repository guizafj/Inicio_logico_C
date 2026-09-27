/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:48:30 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/27 11:35:47 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
Writes a string to a file descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (fd < 0 || !s)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
