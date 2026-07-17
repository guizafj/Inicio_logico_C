
//#include <stdio.h>

int	strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	unsigned int	n = 5;
	// Caso 1: Cadenas exactamente iguales (Debe dar 0)
	int res1 = strncmp("hola mundo", "hola mundo", n);
	printf("Test 1 - Iguales: %d\n", res1);

	// Caso 2: s1 es menor alfabéticamente (Debe dar un número negativo)
	int res2 = strncmp("abcdef", "abdefgh", n);
	printf("Test 2 - s1 menor: %d\n", res2);

	// Caso 3: s1 es mayor alfabéticamente (Debe dar un número positivo)
	int res3 = strncmp("xyzabc", "abcdef", n);
	printf("Test 3 - s1 mayor: %d\n", res3);

	// Caso 4: Una cadena es más corta (Debe dar la diferencia con '\0')
	printf("Test 4 - Longitud: %d\n", strncmp("holas", "holas socio", n));

	return 0;
}*/
