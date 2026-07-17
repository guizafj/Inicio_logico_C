
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>
*/

char	*strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    printf("Iniciando pruebas para strcpy...\n");

    // --- TEST 1: Caso normal ---
    // Debe copiar la cadena completa incluyendo el '\0' al final
    char dest1[10] = "XXXXXXXXXX";
    strcpy(dest1, "Hola");
    assert(strcmp(dest1, "Hola") == 0);
    assert(dest1[4] == '\0'); // Verifica que el terminador nulo correctamente
    assert(dest1[5] == 'X');  // Lo que está después del '\0' no se toca
    printf("-> Test 1 pasado: Copia normal y terminador nulo.\n");

    // --- TEST 2: Copiar una cadena vacía ---
    // Debe convertir el primer carácter del destino en '\0'
    char dest2[5] = "AAAAA";
    strcpy(dest2, "");
    assert(dest2[0] == '\0');
    assert(dest2[1] == 'A');  // El resto permanece intacto
    printf("-> Test 2 pasado: Cadena origen vacía.\n");

    // --- TEST 3: Verificar el valor de retorno ---
    // Debe retornar exactamente el mismo puntero de destino
    char dest3[20];
    char *ptr_retorno = strcpy(dest3, "ValidarRetorno");
    assert(ptr_retorno == dest3);
    printf("-> Test 3 pasado: Retorno de puntero correcto.\n");

    printf("\n¡Felicidades! Todos los tests de pasaron exitosamente.\n");
    return (0);
}*/
