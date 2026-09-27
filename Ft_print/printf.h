/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 00:23:00 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/27 11:36:01 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
void	ft_putnbr_fd(int n, int fd);

#endif
