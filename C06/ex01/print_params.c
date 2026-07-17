
#include <unistd.h>

void	print_params(int argc, char **str)
{
	int	i;
	int	argument_index;

	argument_index = 1;
	while (argument_index < argc)
	{
		i = 0;
		while (str[argument_index][i] != '\0')
		{
			write(1, &str[argument_index][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argument_index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	print_params(argc, argv);
	return (0);
}
