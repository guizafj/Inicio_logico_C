
#include <unistd.h>

void	rev_params(int argc, char **str)
{
	int	i;
	int	last;

	last = argc - 1;
	while (last >= 1)
	{
		i = 0;
		while (str[last][i] != '\0')
		{
			write(1, &str[last][i], 1);
			i++;
		}
		write(1, "\n", 1);
		last--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	rev_params(argc, argv);
	return (0);
}
