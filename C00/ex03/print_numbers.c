
#include <unistd.h>

//void	print_numbers(void);

void	print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main(void)
{
	print_numbers();
	return (1);
}*/
