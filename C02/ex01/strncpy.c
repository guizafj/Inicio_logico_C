
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>
*/

char	*strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    printf("Iniciando pruebas para strncpy...\n");

    // --- TEST 1: Caso normal (n es mayor que la cadena origen) ---
    // Debe copiar "Hola" y rellenar el resto del búfer con '\0'
    char dest1[10] = "XXXXXXXXXX";
    strncpy(dest1, "Hola", 7);
    assert(strcmp(dest1, "Hola") == 0);
    assert(dest1[4] == '\0'); // Verifica el relleno de nulos
    assert(dest1[5] == '\0');
    assert(dest1[6] == '\0');
    assert(dest1[7] == 'X');  // No debe tocar más allá de n
    printf("-> Test 1 pasado: Caso normal y relleno de nulos.\n");

    // --- TEST 2: Origen más largo que n (Truncado) ---
    // No debe añadir '\0' al final porque n se agota antes
    char dest2[10] = "XXXXXXXXXX";
    strncpy(dest2, "MundoLargo", 5);
    assert(strncmp(dest2, "Mundo", 5) == 0);
    assert(dest2[5] == 'X'); // Asegura que NO puso un '\0' en la posición 5
    printf("-> Test 2 pasado: Truncado correcto sin agregar '\\0'.\n");

    // --- TEST 3: n es exactamente cero ---
    // El destino no debe modificarse en absoluto
    char dest3[10] = "Original";
    strncpy(dest3, "Nuevo", 0);
    assert(strcmp(dest3, "Original") == 0);
    printf("-> Test 3 pasado: Manejo de n = 0.\n");

    // --- TEST 4: Copiar una cadena vacía ---
    // Debe rellenar todas las posiciones solicitadas con '\0'
    char dest4[5] = "AAAAA";
    strncpy(dest4, "", 3);
    assert(dest4[0] == '\0');
    assert(dest4[1] == '\0');
    assert(dest4[2] == '\0');
    assert(dest4[3] == 'A'); // Límite respetado
    printf("-> Test 4 pasado: Cadena vacía origen.\n");

    // --- TEST 5: Verificar el valor de retorno ---
    // strncpy debe retornar exactamente el puntero de destino original
    char dest5[10];
    char *ptr_retorno = strncpy(dest5, "Test", 4);
    assert(ptr_retorno == dest5);
    printf("-> Test 5 pasado: Retorno de puntero correcto.\n");

    printf("\n¡Felicidades! Todos los tests pasaron exitosamente.\n");
    return (0);
}*/
