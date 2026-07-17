
//#include <stdio.h>

int	strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main() {
    // Caso 1: Cadenas exactamente iguales (Debe dar 0)
    int res1 = strcmp("hola", "hola");
    printf("Test 1 - Iguales: %d\n", res1);

    // Caso 2: s1 es menor alfabéticamente (Debe dar un número negativo)
    int res2 = strcmp("abc", "abd");
    printf("Test 2 - s1 menor: %d\n", res2);

    // Caso 3: s1 es mayor alfabéticamente (Debe dar un número positivo)
    int res3 = strcmp("xyz", "abc");
    printf("Test 3 - s1 mayor: %d\n", res3);

    // Caso 4: Una cadena es más corta (Debe dar la diferencia con '\0')
    printf("Test 4 - Longitud: %d\n", strcmp("hola", "holas"));

    return 0;
}*/
