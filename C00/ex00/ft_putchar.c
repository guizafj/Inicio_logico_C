
#include <unistd.h>

//void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putchar('j');
	ft_putchar('a');
	ft_putchar('v');
	ft_putchar('i');
	ft_putchar('e');
	ft_putchar('r');
	ft_putchar('\n');

	return (0);
}*/
