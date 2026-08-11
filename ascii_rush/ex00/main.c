/* ascii_rush: ejecutable de prueba para generar rectángulos ASCII */

#include "rush.h"

int convert(char *str)
{
	int 	resultado = 0;
	int 	signo = 1;
	int 	i = 0;
	char	*message;

	if (str[0] == '-') {
		signo = -1;
		i++; // Saltar el signo menos
	}
	else if (str[0] == '+') {
		i++; // Saltar el signo más si existe
	}
	message = "Error, el valor ingresado no es un número valido\n";
	while (str[i] != '\0') 
	{
		// Verificar si el caracter es realmente un número
		if (str[i] < '0' || str[i] > '9') 
		{
			print_message(message);
			return 1;
		}
		// Aplicar el algoritmo
		resultado = (resultado * 10) + (str[i] - '0');
		i++;
	}
	return (resultado * signo);
}


int main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	option;
	char	*message;

	message = "Error: Por favor, introduce los parametros necesarios\n";
	if (argc < 3) {
		print_message(message);
		return 1; // Terminar con código de error
	}
	x = convert(argv[1]);
	y = convert(argv[2]);
	if (argc != 3)
		option = convert(argv[3]);
	else
		option = 0;
	if (option == 0)
		rush(x,y);
	else if (option == 1)
		rush00(x,y);
	else if (option == 2)
		rush01(x,y);
	else if (option == 3)
		rush02(x,y);
	else if (option == 4)
		rush03(x,y);
	else
		rush(x,y);
	return 0;
}
