
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		putnbr(num / 10);
		putchar((num % 10) + '0');
	}
	else
	{
		putchar(num + '0');
	}
}
/*
int	main(void)
{
	putnbr(-2147483648);
	return (0);
}*/
