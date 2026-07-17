
int	iterative_factorial(int nb)
{
	unsigned int	result;
	int				i;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb < 0 || nb == 1)
		return (1);
	while (i < nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%u\n", iterative_factorial(7));
	return (0);
}*/
