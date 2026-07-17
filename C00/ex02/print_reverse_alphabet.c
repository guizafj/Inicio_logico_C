
#include <unistd.h>

//void	print_reverse_alphabet(void);

void	print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while ('a' <= letter)
	{
		write(1, &letter, 1);
		letter--;
	}
}
/*
int	main(void)
{
	print_reverse_alphabet();
	return (1);
}*/
