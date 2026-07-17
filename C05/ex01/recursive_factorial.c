
int	recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%u\n", recursive_factorial(4));
	return (0);
}*/