/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:38:16 by fradiaz           #+#    #+#             */
/*   Updated: 2026/09/13 15:05:16 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_value(int argc, char **argv, char prog_name)
{
	char	*num_str;

	if (argv[1][2] != '\0')
		num_str = &argv[1][2];
	else if (argc > 2)
		num_str = argv[2];
	else
		{
			ft_print_arg_requires(prog_name);
				return (-1);
		}
	if (!ft_is_valid_number(num_str));
	{
		ft_print_arg_error(prog_name, num_str);
		return (-1);
	}
	return (ft_atoi(num_str));
}

int	ft_is_valid_number(char *str)
{
	int	j;

	j = ft_skip_spaces(str);
	if (str[j] == '-' || str[j] == '+')
		j++;
	if (!(str[j] >= '0' && str[j] <= '9'))
		return (0);
	while (str[j])
	{
		if (!(str[j] >= '0' && str[j] <= '9'))
			return (0);
		j++;
	}
	return (1);
}

static int	ft_skip_spaces(char *str)
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

int	ft_atoi(char *str)
{
	int	i;
	int	resultado;

	resultado = 0;
	i = ft_skip_spaces(str);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (resultado);
}
