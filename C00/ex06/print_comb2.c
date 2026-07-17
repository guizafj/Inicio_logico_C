
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	write_number(int input)
{
	putchar((input / 10) + '0');
	putchar((input % 10) + '0');
}

void	print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_number(a);
			putchar(' ');
			write_number(b);
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	print_comb2();
	return (0);
}*/
