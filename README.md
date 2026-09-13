# Prácticas de C

Repositorio personal de aprendizaje en lenguaje C. Aquí se reúnen ejercicios cortos, funciones utilitarias y pequeños programas pensados para practicar sintaxis, punteros, cadenas, arrays, recursión y ordenación básica.

## Estructura

El proyecto está organizado por bloques `C00` a `C10`, además de `Libft` y `ascii_rush`. Cada bloque agrupa ejercicios independientes y mantiene una progresión natural de dificultad.

## Convenciones

- Las funciones y los archivos de ejercicios siguen la convención `ft_`.
- Cada ejercicio vive en su propia carpeta `exXX`.
- Cuando un bloque incluye pruebas, estas permanecen junto al código para facilitar su lectura.

## Módulos

### C00 - Salida básica

- `ft_putchar.c`: escribe un carácter en la salida estándar.
- `ft_print_alphabet.c`: imprime el alfabeto en minúsculas.
- `ft_print_reverse_alphabet.c`: imprime el alfabeto en orden inverso.
- `ft_print_numbers.c`: imprime los dígitos del 0 al 9.
- `ft_is_negative.c`: muestra el signo de un entero.
- `ft_print_comb.c`: genera combinaciones ascendentes de tres dígitos.
- `ft_putnbr.c`: convierte un entero en salida textual.
- `ft_print_comb2.c`: imprime combinaciones de dos números de dos cifras.

### C01 - Punteros y arrays

- `ft_set_to_42.c`: modifica una variable para asignarle el valor 42.
- `ft_ultimate_ft.c`: navega una cadena profunda de punteros hasta modificar el valor final.
- `ft_swap.c`: intercambia dos enteros por referencia.
- `ft_div_mod.c`: calcula división entera y resto.
- `ft_ultimate_div_mod.c`: intercambia los resultados de división y módulo en los parámetros recibidos.
- `ft_putstr.c`: imprime una cadena carácter a carácter.
- `ft_strlen.c`: calcula la longitud de una cadena.
- `ft_rev_int_tab.c`: invierte un array de enteros.
- `ft_sort_int_tab.c`: ordena un array de enteros de menor a mayor.

### C02 - Cadenas y texto

- `ft_strcpy.c`: copia una cadena en un destino.
- `ft_strncpy.c`: copia hasta un número limitado de caracteres.
- `ft_str_is_alpha.c`: verifica si una cadena contiene solo letras.
- `ft_str_is_numeric.c`: verifica si una cadena contiene solo dígitos.
- `ft_str_is_lowercase.c`: verifica si una cadena está en minúsculas.
- `ft_str_is_uppercase.c`: verifica si una cadena está en mayúsculas.
- `ft_str_is_printable.c`: verifica si todos los caracteres son imprimibles.
- `ft_strupcase.c`: convierte una cadena a mayúsculas.
- `ft_strlowcase.c`: convierte una cadena a minúsculas.
- `ft_strcapitalize.c`: capitaliza palabras dentro de una cadena.
- `ft_strlcpy.c`: copia con límite y devuelve la longitud de origen.
- `ft_putnbr_non_printable.c`: imprime caracteres no imprimibles en hexadecimal.
- `ft_putstr_non_printable.c`: muestra una cadena escapando caracteres no imprimibles.
- `ft_print_memory.c`: vuelca memoria en formato hexadecimal y textual.

### C03 - Comparación y concatenación

- `ft_strcmp.c`: compara dos cadenas.
- `ft_strncmp.c`: compara dos cadenas hasta un límite.
- `ft_strcat.c`: concatena una cadena al final de otra.
- `ft_strncat.c`: concatena una cantidad limitada de caracteres.
- `ft_strstr.c`: busca una subcadena dentro de otra.
- `ft_strlcat.c`: concatena con control de tamaño de buffer.

### C04 - Conversión y bases

- `ft_strlen.c`: calcula la longitud de una cadena.
- `ft_putstr.c`: imprime una cadena por salida estándar.
- `ft_putnbr.c`: imprime un entero.
- `ft_atoi.c`: convierte texto a entero.
- `ft_putnbr_base.c`: imprime un entero en una base arbitraria.
- `ft_atoi_base.c`: convierte una cadena numérica desde una base dada.

### C05 - Recursión y matemáticas

- `ft_iterative_factorial.c`: calcula factorial de forma iterativa.
- `ft_recursive_factorial.c`: calcula factorial de forma recursiva.
- `ft_iterative_power.c`: eleva un número a una potencia con bucle.
- `ft_recursive_power.c`: eleva un número a una potencia con recursión.
- `ft_fibonacci.c`: devuelve el término de Fibonacci en una posición dada.
- `ft_sqrt.c`: aproxima la raíz cuadrada entera.
- `ft_is_prime.c`: comprueba si un número es primo.
- `ft_find_next_prime.c`: busca el siguiente número primo.

### C06 - Parámetros de programa

- `ft_print_program_name.c`: muestra el nombre con el que se ejecuta el programa.
- `ft_print_params.c`: imprime los parámetros recibidos.
- `ft_rev_params.c`: imprime los parámetros en orden inverso.
- `ft_sort_params.c`: ordena alfabéticamente los parámetros recibidos.

### C07 - Memoria y composición de cadenas

- `ft_strdup.c`: duplica una cadena reservando memoria dinámica.
- `ft_range.c`: crea un array con un rango de enteros.
- `ft_ultimate_range.c`: devuelve un rango mediante un puntero doble.
- `ft_strjoin.c`: une varias cadenas utilizando un separador.
- `ft_convert_base.c`: convierte números entre bases.
- `ft_split.c`: separa una cadena utilizando un conjunto de delimitadores.

### C08 - Headers y estructuras

- `ft.h`: declara una interfaz básica de funciones sobre enteros, cadenas y arrays.
- `ft_boolean.h`: define un tipo booleano, constantes lógicas y mensajes de resultado.
- `ft_abs.h`: proporciona una macro para obtener el valor absoluto.
- `ft_point.h`: define una estructura de punto mediante coordenadas enteras.
- `ft_stock_str.h`: declara la estructura utilizada para representar cadenas con longitud y copia.
- `ft_strs_to_tab.c`: transforma argumentos de programa en un array de estructuras.
- `ft_show_tab.c`: muestra el contenido de un array de estructuras de cadenas.
- `main.c`: contiene programas de prueba para los ejercicios que requieren un punto de entrada.

### C09 - Librería estática

Este bloque reúne funciones reutilizables y experimenta con la creación de una librería estática.

- `ft_putchar.c`: escribe un carácter.
- `ft_putstr.c`: escribe una cadena.
- `ft_strcmp.c`: compara dos cadenas.
- `ft_strlen.c`: calcula la longitud de una cadena.
- `ft_swap.c`: intercambia dos enteros.
- `libft_creator.sh`: automatiza la creación de la librería a partir de los objetos compilados.
- `Makefile`: centraliza la compilación del ejercicio de librería.
- `ft_split.c`: divide una cadena en palabras según un conjunto de separadores.

### C10 - Entrada y salida de archivos

- `ft_display_file.c`: muestra el contenido de un archivo.
- `ft_cat.c`: reproduce el comportamiento básico de `cat` sobre archivos y entrada estándar.
- `ft_atoi.c`: valida y convierte el argumento numérico de una opción.
- `ft_aux_print.c`: agrupa funciones auxiliares para mostrar errores por descriptor.
- `ft_tail.c`: trabaja con las últimas posiciones de archivos y entrada estándar.
- `Makefile`: define los comandos de compilación y limpieza del bloque.

### Libft - En desarrollo

Módulo actualmente en desarrollo. La implementación se está construyendo de forma progresiva a partir de funciones básicas de memoria, clasificación de caracteres y manipulación de cadenas.

- `ft_bzero.c`: limpia una zona de memoria.
- `ft_isalnum.c`: comprueba si un carácter es alfanumérico.
- `ft_isalpha.c`: comprueba si un carácter es alfabético.
- `ft_isascii.c`: comprueba si un valor pertenece al rango ASCII.
- `ft_isdigit.c`: comprueba si un carácter es un dígito.
- `ft_isprint.c`: comprueba si un carácter es imprimible.
- `ft_memcpy.c`: copia una cantidad de bytes entre zonas de memoria.
- `ft_memmove.c`: mueve una cantidad de bytes admitiendo solapamiento.
- `ft_menset.c`: contiene la implementación actual de la función de relleno de memoria.
- `ft_strlen.c`: calcula la longitud de una cadena.
- `ft_strlcpy.c`: copia cadenas con control de tamaño.
- `Makefile`: prepara la compilación de la librería en desarrollo.

### ascii_rush - Dibujos ASCII

Proyecto independiente con varias implementaciones para dibujar rectángulos y bordes mediante caracteres ASCII.

- `ft_putchar.c`: escribe un carácter en la salida estándar.
- `rush00.c` a `rush04.c`: contienen cinco variantes de dibujo.
- `main.c`: permite seleccionar una variante y probarla con ancho y alto.
- `README.md`: incluye instrucciones específicas de compilación y ejecución.

## Objetivo del repositorio

Este espacio sirve como base de práctica y portafolio técnico. El foco está en mostrar evolución real: ejercicios pequeños, nombres claros y código que se puede leer sin contexto adicional.