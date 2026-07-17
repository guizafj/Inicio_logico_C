
//#include <stdio.h>

int	str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("Solo MAYUS (Debe ser 1): %d\n", str_is_uppercase("HOLAMUNDO"));
	printf("Con espacios (Debe ser 0): %d\n", str_is_uppercase("HOLA MUNDO"));
	printf("Con números (Debe ser 0): %d\n", str_is_uppercase("42Malaga"));
	printf("Cadena vacía (Debe ser 1): %d\n", str_is_uppercase(""));
	return (0);
}*/
