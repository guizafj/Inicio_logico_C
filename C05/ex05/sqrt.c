
int	sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
		++sqrt;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", sqrt(25));
	return (0);
}*/
