
int	iterative_power(int nb, int power)
{
	long	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", iterative_power(2, 3));
	return  (0);
}*/