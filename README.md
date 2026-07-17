# Prácticas de C

Repositorio personal de aprendizaje en lenguaje C. Aquí se reúnen ejercicios cortos, funciones utilitarias y pequeños programas pensados para practicar sintaxis, punteros, cadenas, arrays, recursión y ordenación básica.

## Estructura

El proyecto está organizado por bloques `C00` a `C06`. Cada bloque agrupa ejercicios independientes y mantiene una progresión natural de dificultad.

## Convenciones

- Los archivos fuente usan el nombre descriptivo de la función principal.
- Cada ejercicio vive en su propia carpeta `exXX`.
- Cuando un bloque incluye pruebas, estas permanecen junto al código para facilitar su lectura.

## Módulos

### C00 - Salida básica

- `putchar.c`: escribe un carácter en la salida estándar.
- `print_alphabet.c`: imprime el alfabeto en minúsculas.
- `print_reverse_alphabet.c`: imprime el alfabeto en orden inverso.
- `print_numbers.c`: imprime los dígitos del 0 al 9.
- `is_negative.c`: muestra el signo de un entero.
- `print_comb.c`: genera combinaciones ascendentes de tres dígitos.
- `putnbr.c`: convierte un entero en salida textual.
- `print_comb2.c`: imprime combinaciones de dos números de dos cifras.

### C01 - Punteros y arrays

- `set_to_42.c`: modifica una variable para asignarle el valor 42.
- `ultimate_ft.c`: navega una cadena profunda de punteros hasta modificar el valor final.
- `swap.c`: intercambia dos enteros por referencia.
- `div_mod.c`: calcula división entera y resto.
- `ultimate_div_mod.c`: intercambia los resultados de división y módulo en los parámetros recibidos.
- `putstr.c`: imprime una cadena carácter a carácter.
- `strlen.c`: calcula la longitud de una cadena.
- `rev_int_tab.c`: invierte un array de enteros.
- `sort_int_tab.c`: ordena un array de enteros de menor a mayor.

### C02 - Cadenas y texto

- `strcpy.c`: copia una cadena en un destino.
- `strncpy.c`: copia hasta un número limitado de caracteres.
- `str_is_alpha.c`: verifica si una cadena contiene solo letras.
- `str_is_numeric.c`: verifica si una cadena contiene solo dígitos.
- `str_is_lowercase.c`: verifica si una cadena está en minúsculas.
- `str_is_uppercase.c`: verifica si una cadena está en mayúsculas.
- `str_is_printable.c`: verifica si todos los caracteres son imprimibles.
- `strupcase.c`: convierte una cadena a mayúsculas.
- `strlowcase.c`: convierte una cadena a minúsculas.
- `strcapitalize.c`: capitaliza palabras dentro de una cadena.
- `strlcpy.c`: copia con límite y devuelve la longitud de origen.
- `putnbr_non_printable.c`: imprime caracteres no imprimibles en hexadecimal.
- `putstr_non_printable.c`: muestra una cadena escapando caracteres no imprimibles.
- `print_memory.c`: vuelca memoria en formato hexadecimal y textual.

### C03 - Comparación y concatenación

- `strcmp.c`: compara dos cadenas.
- `strncmp.c`: compara dos cadenas hasta un límite.
- `strcat.c`: concatena una cadena al final de otra.
- `strncat.c`: concatena una cantidad limitada de caracteres.
- `strstr.c`: busca una subcadena dentro de otra.
- `strlcat.c`: concatena con control de tamaño de buffer.

### C04 - Conversión y bases

- `strlen.c`: calcula la longitud de una cadena.
- `putstr.c`: imprime una cadena por salida estándar.
- `putnbr.c`: imprime un entero.
- `atoi.c`: convierte texto a entero.
- `putnbr_base.c`: imprime un entero en una base arbitraria.
- `atoi_base.c`: convierte una cadena numérica desde una base dada.

### C05 - Recursión y matemáticas

- `iterative_factorial.c`: calcula factorial de forma iterativa.
- `recursive_factorial.c`: calcula factorial de forma recursiva.
- `iterative_power.c`: eleva un número a una potencia con bucle.
- `recursive_power.c`: eleva un número a una potencia con recursión.
- `fibonacci.c`: devuelve el término de Fibonacci en una posición dada.
- `sqrt.c`: aproxima la raíz cuadrada entera.
- `is_prime.c`: comprueba si un número es primo.
- `find_next_prime.c`: busca el siguiente número primo.

### C06 - Parámetros de programa

- `print_program_name.c`: muestra el nombre con el que se ejecuta el programa.
- `print_params.c`: imprime los parámetros recibidos.
- `rev_params.c`: imprime los parámetros en orden inverso.
- `sort_params.c`: ordena alfabéticamente los parámetros recibidos.

## Objetivo del repositorio

Este espacio sirve como base de práctica y portafolio técnico. El foco está en mostrar evolución real: ejercicios pequeños, nombres claros y código que se puede leer sin contexto adicional.