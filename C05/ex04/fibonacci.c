
int	fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (fibonacci(index - 1) + fibonacci(index -2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", fibonacci(8));
	return (0);
}*/
