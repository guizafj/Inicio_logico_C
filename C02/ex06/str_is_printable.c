
//#include <stdio.h>

int	str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
/*
void test(char *str, int expected)
{
    int result = str_is_printable(str);
    
    if (result == expected)
        printf("\033[0;32m[OK]\033[0m   "); // Verde
    else
        printf("\033[0;31m[FAIL]\033[0m "); // Rojo
        
    printf("Esperado: %d | Obtenido: %d | 
    	Cadena: \"%s\"\n", expected, result, str);
}

int main(void)
{
    printf("--- Iniciando tests de str_is_printable ---\n");
    
    // Casos que deben devolver 1 (Todo imprimible)
    test("Hola Mundo!", 1);         // Incluye espacio y símbolos
    test("1234567890", 1);          // Solo números
    test("!@#$%^&*()_+~`|{}:<>?", 1); // Solo símbolos
    test("", 1);                    // 
    	Cadena vacía (no tiene caracteres no imprimibles)
    test(" ~", 1);                  // 
    	Espacio y tilde (límites de la tabla ASCII imprimible)

    // Casos que deben devolver 0 (Tienen caracteres no imprimibles)
    test("Hola\nMundo", 0);         // Incluye salto de línea
    test("Hola\tMundo", 0);         // Incluye tabulación
    test("Hola\x01Mundo", 0);       // Incluye carácter de control ASCII 1
    test("Hola\x7F Adios",  0);       // Incluye carácter DEL (ASCII 127)

    printf("--- Fin de los tests ---\n");
    return (0);
}*/
