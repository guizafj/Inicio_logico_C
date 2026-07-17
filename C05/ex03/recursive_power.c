
int	recursive_power(int nb, int power)
{
	long	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", recursive_power(2, 3));
	return (0);
}*/