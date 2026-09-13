
#include <unistd.h>

//void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
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
	ft_print_reverse_alphabet();
	return (1);
}*/
