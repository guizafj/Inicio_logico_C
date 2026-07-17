
//#include <stdio.h>

int	str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	printf("Solo Numeros (Debe ser 1): %d\n", str_is_numeric("1234"));
	printf("Con espacios (Debe ser 0): %d\n", str_is_numeric("Hola Mundo"));
	printf("Con Letras (Debe ser 0): %d\n", str_is_numeric("Hola mundo"));
	printf("Cadena vacía (Debe ser 1): %d\n", str_is_numeric(""));
	return (0);
}*/
