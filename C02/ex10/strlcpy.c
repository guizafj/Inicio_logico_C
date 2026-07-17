
//#include <stdio.h>

unsigned int	strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_lenght;

	i = 0;
	src_lenght = 0;
	while (src[src_lenght] != '\0')
	{
		src_lenght++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_lenght);
}
/*
   int	main(void)
   {
   char str1[] = "HOLA MUNDO";
   char str2[] = "";
   unsigned int ab = 5; 

   printf("No cambia nada): %u\n", strlcpy(str2, str1, ab));
   return (0);
   }*/
