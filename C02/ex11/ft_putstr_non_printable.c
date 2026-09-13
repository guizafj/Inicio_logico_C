
#include <unistd.h>

void	ft_print_hex_digit(unsigned char num)
{
	char	c;

	if (num < 10)
	{
		c = num + '0';
	}
	else
	{
		c = num - 10 + 'a';
	}
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	val;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			write(1, &str[i], 1);
		}
		else
		{
			val = (unsigned char)str[i];
			write(1, "\\", 1);
			ft_print_hex_digit(val / 16);
			ft_print_hex_digit(val % 16);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
