
//#include <stdio.h>

char	*strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "HOLAMUNDO";
	char str2[] = "Hola mundO";
	char str3[] = "42";
	char str4[] = "";

	printf("No cambia nada): %s\n", strupcase(str1));
	printf("Cambia las minusculas): %s\n", strupcase(str2));
	printf("Con números no cambia nada: %s\n", strupcase(str3));
	printf("Cadena vacía no cambia: %s\n", strupcase(str4));
	return (0);
}*/
