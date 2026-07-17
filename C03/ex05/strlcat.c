
//#include <stdio.h> 

unsigned int	strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_src;
	unsigned int	length_dst;

	length_dst = 0;
	while (dest[length_dst] != '\0')
		length_dst++;
	length_src = 0;
	while (src[length_src] != '\0')
		length_src++;
	if (size == 0)
		return (length_src);
	if (size <= length_dst)
		return (size + length_src);
	i = length_dst;
	j = 0;
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (length_dst + length_src);
}
/*
int	main(void)
{
	char	source[] = "Mundo feliz ;)";
	char	destino[14] = "Hola, ";
	printf("%u\n",strlcat(destino, source, sizeof(destino)));
	printf("%s\n", destino);
	return (0);
	
}*/
