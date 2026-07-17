
/*#include <stdio.h>
#include <string.h>*/

char	*strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		j = 0;
		i++;
	}
	return ((void *)0);
}
/*
// Función auxiliar para comparar resultados
void run_test(int test_num, char *haystack, char *needle)
{
    char *res_original = strstr(haystack, needle);
    char *res_result = strstr(haystack, needle);

    if (res_original == res_result)
    {
        printf("✅ Test %d PASSED", test_num);
        if (res_result != NULL)
            printf(" -> Encontrado: \"%s\"\n", res_result);
        else
            printf(" -> Retornó NULL correctamente\n");
    }
    else
    {
        printf("❌ Test %d FAILED!\n", test_num);
        printf("   Original: %p (%s)\n", (void*)res_original, 
	res_original ? res_original : "NULL");
        printf("   Tuya:     %p (%s)\n", (void*)
    	res_result, res_result ? res_result : "NULL");
    }
}

int main(void)
{
    printf("=== INICIANDO BATERÍA DE PRUEBAS PARA STRSTR ===\n\n");

    // Test 1: Caso básico estándar
    run_test(1, "Hola Mundo", "Mundo");

    // Test 2: La aguja está al puro inicio del pajar
    run_test(2, "Programación en C", "Prog");

    // Test 3: La aguja está al puro final del pajar
    run_test(3, "Aprender a programar en C", "en C");

    // Test 4: La aguja es una cadena vacía 
    (Requerimiento estricto de la función)
    run_test(4, "Cualquier texto", "");

    // Test 5: El pajar es una cadena vacía
    run_test(5, "", "buscar");

    // Test 6: Ambos son cadenas vacías
    run_test(6, "", "");

    // Test 7: La aguja es más grande que el pajar
    run_test(7, "Hola", "Hola Mundo Extendido");

    // Test 8: Patrones repetitivos (Donde fallan los bucles síncronos)
    run_test(8, "abcabcabce", "abcabce");

    // Test 9: Coincidencias parciales que mueren al final del pajar
    run_test(9, "mississippi", "issis");

    printf("\n=== PRUEBAS FINALIZADAS ===\n");
    return (0);
}*/
