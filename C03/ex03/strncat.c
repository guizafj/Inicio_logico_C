
//#include <stdio.h>

char	*strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
		count++;
	while (i < nb && src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	destino[30] = "Hola, ";
	char	*source = "Mundo";
	unsigned int nb = 2;

	strncat(destino, source, nb);
	printf("%s\n", destino);
	return (0);
}*/
