
//#include <stdio.h>

char	*strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "holamundo";
	char str2[] = "HOLA MUNDO";
	char str3[] = "42";
	char str4[] = "";

	printf("No cambia nada): %s\n", strlowcase(str1));
	printf("Cambia las letra a minusculas): %s\n", strlowcase(str2));
	printf("Con números no cambia nada: %s\n", strlowcase(str3));
	printf("Cadena vacía no cambia: %s\n", strlowcase(str4));
	return (0);
}*/
