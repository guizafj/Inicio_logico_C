*This project was created as part of the 42 curriculum by fradiaz*

## Description

`ft_printf` is a reduced, custom implementation of the C standard library's
`printf` function. Its purpose is to practise variadic functions, format-string
parsing, output with `write`, and value conversion to different numeric bases.

The project produces the static library `libftprintf.a`. Its main public
function is:

```c
int ft_printf(char const *format, ...);
```
<details>
<summary>🇬🇧 Continue in English</summary>

---

The following conversions are supported:

| Conversion | Meaning |
| --- | --- |
| `%c` | Character |
| `%s` | String; a null string is printed as `(null)` |
| `%p` | Memory address in hexadecimal with the `0x` prefix; a null pointer is printed as `(nil)` |
| `%d`, `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Unsigned hexadecimal integer in lowercase |
| `%X` | Unsigned hexadecimal integer in uppercase |
| `%%` | Literal `%` character |

The project covers the usual scope of `ft_printf` exercise. It does not
include flags, field width, precision, length modifiers, or conversions outside
the list above.

## Instructions

### Requirements

- A C compiler compatible with `cc`.
- `make`.
- A POSIX system providing `unistd.h` and the `write` system call.

### Build

From the repository root:

```sh
make
```

This compiles the source files with `-Wall -Wextra -Werror` and creates
`libftprintf.a`.

To rebuild everything from scratch:

```sh
make re
```

To remove object files or the generated library:

```sh
make clean
make fclean
```

### Use the library

Include `ft_printf.h` and link the library when compiling your program:

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Number: %d, hexadecimal: %x\\n", 42, 42);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror example.c -I. -L. -lftprintf -o example
./example
```

The function returns the number of characters written. If it receives a null
format string, it returns `-1`.

## Resources

- [printf(3) on Linux man-pages](https://man7.org/linux/man-pages/man3/printf.3.html): reference for the standard function and its conversions.
- [cppreference: printf](https://en.cppreference.com/w/c/io/fprintf): description of C format strings.
- [cppreference: stdarg.h](https://en.cppreference.com/w/c/variadic): reference for `va_list`, `va_start`, `va_arg`, and `va_end`.
- [The Open Group: write](https://pubs.opengroup.org/onlinepubs/9699919799/functions/write.html): POSIX specification for the call used to write to standard output.
- Local documentation: `man 3 printf`, `man 3 write`, and `man 3 stdarg` when available on the system.

### Use of AI

AI was also used during the development of the project to resolve questions
about variadic parameters, especially the role of `va_list`, `va_start`,
`va_arg`, and `va_end`, and to improve the understanding of the execution flow
from format parsing to output. It does not replace the author's understanding
or validation of the implementation.

## Algorithm and Data Structure Choices

### Format parsing

`ft_printf` traverses the format string once, from left to right. Normal
characters are sent directly to `ft_putchar`; when `%` is found, the following
character is interpreted as a conversion and dispatched to the appropriate
function. This linear traversal has a cost of O(n) with respect to the format
length, excluding the digits generated for each argument, and keeps the control
flow simple and predictable.

Variadic arguments are read with `va_list` in the same order as their
conversions. `va_list` is the appropriate data structure for a function whose
number and types of arguments are known only from the format string. It also
avoids defining a custom argument structure or allocating memory for an
argument list.

### Numeric conversion

Numbers are converted through successive division and remainder operations. For
a base `b`, the remainder `n % b` selects the corresponding digit in the base
string, while `n / b` reduces the problem. `ft_putnbr_base` applies this process
recursively: it processes the quotient first and writes the remainder afterward,
so the digits are emitted in the correct order. Recursion depth is O(log_b(n)),
and auxiliary stack space has the same order.

Using a string as a digit table allows the same algorithm to be reused for
decimal and hexadecimal output by changing only the base
(`0123456789`, `0123456789abcdef`, or `0123456789ABCDEF`). `%d` and `%i` keep
the sign and use `long` internally so the absolute value of the minimum integer
can be handled correctly. Addresses are converted to `unsigned long` before
being printed in hexadecimal.

### Data structures

The project uses only scalar types, pointers, the format string, the literal
string representing each base, and the state held by `va_list`. It does not use
dynamic arrays, linked lists, maps, or heap allocation. This is sufficient
because the problem is a read, convert, and write flow; it avoids allocation
costs and keeps the library small and deterministic.

</details>

---
*Este proyecto ha sido creado como parte del currículo de 42 por fradiaz*

## Descripción

`ft_printf` es una implementación propia y reducida de la función `printf` de
la biblioteca estándar de C. Su objetivo es practicar el uso de funciones
variádicas, el análisis de cadenas de formato, la escritura mediante `write` y
la conversión de valores a distintas bases numéricas.

El resultado del proyecto es la biblioteca estática `libftprintf.a`. La función
pública principal es:

```c
int ft_printf(char const *format, ...);
```
<details>
<summary>🇪🇸 Continuar en Español</summary>

----

Se implementan las siguientes conversiones:

| Conversión | Significado |
| --- | --- |
| `%c` | Carácter |
| `%s` | Cadena de caracteres; una cadena nula se imprime como `(null)` |
| `%p` | Dirección de memoria en hexadecimal con prefijo `0x`; un puntero nulo se imprime como `(nil)` |
| `%d`, `%i` | Entero con signo en base 10 |
| `%u` | Entero sin signo en base 10 |
| `%x` | Entero sin signo en hexadecimal minúsculo |
| `%X` | Entero sin signo en hexadecimal mayúsculo |
| `%%` | Carácter `%` literal |

El proyecto cubre el alcance habitual del ejercicio `ft_printf`. No
incluye flags, anchura, precisión, modificadores de longitud ni otras
conversiones fuera de la lista anterior.

## Instrucciones

### Requisitos

- Un compilador de C compatible con `cc`.
- `make`.
- Un sistema POSIX que proporcione `unistd.h` y la llamada `write`.

### Compilar

Desde la raíz del repositorio:

```sh
make
```

Esto compila los archivos fuente con `-Wall -Wextra -Werror` y crea
`libftprintf.a`.

Para recompilar desde cero:

```sh
make re
```

Para eliminar los archivos objeto o la biblioteca generada:

```sh
make clean
make fclean
```

### Usar la biblioteca

Incluye `ft_printf.h` y enlaza la biblioteca al compilar tu programa:

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Número: %d, hexadecimal: %x\\n", 42, 42);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror ejemplo.c -I. -L. -lftprintf -o ejemplo
./ejemplo
```

La función devuelve el número de caracteres escritos. Si recibe un formato
nulo, devuelve `-1`.

## Recursos

- [printf(3) en Linux man-pages](https://man7.org/linux/man-pages/man3/printf.3.html): referencia de la función estándar y sus conversiones.
- [cppreference: printf](https://en.cppreference.com/w/c/io/fprintf): descripción de las cadenas de formato de C.
- [cppreference: stdarg.h](https://en.cppreference.com/w/c/variadic): referencia para `va_list`, `va_start`, `va_arg` y `va_end`.
- [The Open Group: write](https://pubs.opengroup.org/onlinepubs/9699919799/functions/write.html): especificación POSIX de la llamada utilizada para escribir en la salida estándar.
- Documentación local: `man 3 printf`, `man 3 write` y `man 3 stdarg` (si están disponibles en el sistema).

### Uso de IA

La IA también se utilizó durante el desarrollo del proyecto para resolver dudas
sobre los parámetros variádicos, especialmente el papel de `va_list`,
`va_start`, `va_arg` y `va_end`, y para mejorar la comprensión del flujo de
ejecución desde el análisis del formato hasta la escritura de la salida.
No sustituye la comprensión ni la validación de la implementación por parte del autor.

## Elección del algoritmo y de las estructuras de datos

### Análisis del formato

`ft_printf` recorre la cadena de formato una sola vez, de izquierda a derecha.
Los caracteres normales se envían directamente a `ft_putchar`; cuando aparece
`%`, el carácter siguiente se interpreta como conversión y se delega en la
función correspondiente. Este algoritmo de recorrido lineal tiene un coste de
O(n) respecto a la longitud del formato, sin contar los dígitos que haya que
generar para cada argumento, y permite mantener el control de flujo simple y
predecible.

Los argumentos variables se leen con `va_list` en el mismo orden en que aparecen
las conversiones. `va_list` es la estructura de datos adecuada para una función
cuyo número y tipos de argumentos se conocen únicamente a partir del formato;
además evita tener que definir una estructura propia o reservar memoria para
una lista de argumentos.

### Conversión numérica

Los números se convierten mediante división y resto sucesivos. Para una base
`b`, el resto `n % b` selecciona el dígito correspondiente en la cadena de base,
y `n / b` reduce el problema. La función `ft_putnbr_base` aplica este proceso
recursivamente: primero procesa el cociente y después escribe el resto, de modo
que los dígitos salen en el orden correcto. La profundidad de la recursión es
O(log_b(n)) y el espacio auxiliar es del mismo orden por la pila de llamadas.

El uso de una cadena como tabla de dígitos permite reutilizar el mismo algoritmo
para decimal y hexadecimal, cambiando únicamente la base (`0123456789`,
`0123456789abcdef` o `0123456789ABCDEF`). Para `%d` e `%i` se conserva el signo
y se usa `long` internamente para poder tratar correctamente el valor absoluto
del entero mínimo. Las direcciones se convierten a `unsigned long` antes de
imprimirse en hexadecimal.

### Estructuras de datos

El proyecto utiliza únicamente tipos escalares, punteros, la cadena de formato,
la cadena literal que representa cada base y el estado de `va_list`. No se usan
arrays dinámicos, listas enlazadas, mapas ni memoria asignada en el heap. Esta
elección es suficiente porque el problema es un flujo de lectura, conversión y
escritura; evita costes de asignación y hace que la biblioteca sea pequeña y
determinista.

</details>
