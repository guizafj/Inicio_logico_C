
//#include <stdio.h>

char	*strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
   int	main(void)
   {
   char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
   char str2[] = "Esta es la prueBa para veriFicar las 42mayusculas";

   printf("Cambia las mayusculas): %s\n", strcapitalize(str1));
   printf("Cambio las mayusculas): %s\n", strcapitalize(str2));
   return  (0);
   }*/
