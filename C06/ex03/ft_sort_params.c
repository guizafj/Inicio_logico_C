
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*buf;
	int		j;

	j = 1;
	i = 1;
	while (i < argc)
	{
		while (j < argc -1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				buf = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = buf;
			}
			j++;
		}
		j = 1;
		i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
