
//#include <stdio.h>

int	str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("Solo minus (Debe ser 1): %d\n", str_is_lowercase("holamundo"));
	printf("Con espacios (Debe ser 0): %d\n", str_is_lowercase("hola mundo"));
	printf("Con números (Debe ser 0): %d\n", str_is_lowercase("42Malaga"));
	printf("Cadena vacía (Debe ser 1): %d\n", str_is_lowercase(""));
	return (0);
}*/
