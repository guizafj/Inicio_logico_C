
#include <unistd.h>

//void	putchar(char c);

void	putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	putchar('j');
	putchar('a');
	putchar('v');
	putchar('i');
	putchar('e');
	putchar('r');
	putchar('\n');

	return (0);
}*/
