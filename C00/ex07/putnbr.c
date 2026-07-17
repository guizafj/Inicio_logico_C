
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putnbr(-214748364);
		putchar('8');
		return ;
	}
	if (nb < 0)
	{
		putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		putnbr(nb / 10);
		putchar((nb % 10) + '0');
	}
	else
	{
		putchar(nb + '0');
	}
}
/*
int	main(void)
{
	putnbr(-2147483648);
	return (0);
}*/
