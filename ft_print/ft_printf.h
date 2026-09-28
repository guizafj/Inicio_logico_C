/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 00:23:00 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/28 00:26:07 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_putnbr_addrr(void *addr);

#endif
