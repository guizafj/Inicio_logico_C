
int	check_prime(int num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
	{
		if (check_prime(nb))
			return (nb);
		nb++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", find_next_prime(8));
	return (0);
}*/
