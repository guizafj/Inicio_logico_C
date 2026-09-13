
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putchar((num % 10) + '0');
	}
	else
	{
		ft_putchar(num + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
