
//#include <stdio.h>

char	*strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destino[30] = "Hola, ";
	char	*source = "Mundo";

	strcat(destino, source);
	printf("%s\n", destino);
	return (0);
}*/
