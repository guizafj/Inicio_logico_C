
#include <stdio.h>

int	str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
   printf("Solo alpha (Debe ser 1): %d\n", str_is_alpha("HolaMundo"));
   printf("Con espacios (Debe ser 0): %d\n", str_is_alpha("Hola Mundo"));
   printf("Con números (Debe ser 0): %d\n", str_is_alpha("42Malaga"));
   printf("Cadena vacía (Debe ser 1): %d\n", str_is_alpha(""));
   return (0);
   }*/
