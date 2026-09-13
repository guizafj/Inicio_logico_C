/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:40:34 by fradiaz           #+#    #+#             */
/*   Updated: 2026/07/28 14:08:43 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_negative(char *str, int i, int *signo)
{
	int	neg;

	neg = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2 != 0)
		*signo = -1;
	return (i);
}

int	ft_skip_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ((str[i] == ' ') || (str[i] == '\t')
			|| (str[i] == '\n') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\r')))
	{
		i++;
	}
	return (i);
}

int	ft_this_is_in_the_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long	ft_atoi_base(char *str, char *base, int len)
{
	int		i;
	long	result;
	int		signo;
	int		value;

	result = 0;
	signo = 1;
	if (len == 0)
		return (0);
	i = ft_skip_spaces(str);
	i = ft_is_negative(str, i, &signo);
	value = 0;
	while (str[i] && value != -1)
	{
		value = ft_this_is_in_the_base(str[i], base);
		if (value != -1)
			result = result * len + value;
		i++;
	}
	return (result * signo);
}
