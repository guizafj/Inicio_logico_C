
int	is_negative(char *str, int i, int *signo)
{
	int	neg;

	neg = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2 != 0)
		*signo = -1;
	return (i);
}

int	skip_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ((str[i] == ' ') || (str[i] == '\t')
			|| (str[i] == '\n') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\r')))
	{
		i++;
	}
	return (i);
}

int	atoi(char *str)
{
	int	i;
	int	signo;
	int	resultado;

	resultado = 0;
	signo = 1;
	i = skip_spaces(str);
	i = is_negative(str, i, &signo);
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (resultado * signo);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int count;
	count = argc;
	printf("El resultado de la suma es: %d\n", atoi(argv[1]));
	return (0);
}*/
