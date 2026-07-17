
#include <unistd.h>

//void	is_negative(int n);

void	is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/*
int	main(void)
{
	is_negative(-10);
	return (1);
}*/
