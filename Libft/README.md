*This project was created as part of the 42 curriculum by: fradiaz*

---
# Libft

Static C library developed as the first project of the 42 Common Core. Its
goal is to recreate common functions from the C standard library and provide
reusable utilities for future projects.

## Description

`libft` was built from scratch to practise C fundamentals such as memory
management, string manipulation, arithmetic, pointers, file descriptors and
linked lists.

The result is the static library `libft.a`, together with the `libft.h` header,
which contains the `t_list` type and the public prototypes for the implemented
functions.

The project includes the mandatory Libft functions and linked-list functions.

<details>
<summary>🇬🇧 Continue in English</summary>

---

### Features

1. C standard library functions (libc)

Reimplementations of native C functions for character and memory manipulation,
following their original prototypes and behaviour:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
- Case conversion: `ft_toupper`, `ft_tolower`.
- Memory management: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- String manipulation: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- Type conversion: `ft_atoi` (text to integer).

2. Additional functions (advanced string manipulation)

Functions that are not part of the standard libc but are essential for future
projects:

- Substrings and concatenation: `ft_substr`, `ft_strjoin`, `ft_strtrim`.
- Allocation and splitting: `ft_split` (splits a string into an array using a delimiter character).
- Reverse conversion: `ft_itoa` (integer to text).
- Function mapping: `ft_strmapi`, `ft_striteri` (apply a function to each character of a string).

3. Output functions (file descriptors)

Functions designed to write characters, strings or numbers directly to a file
descriptor (`fd`), allowing output to standard output, standard error or text
files:

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

4. Linked-list functions

Tools for managing dynamic data structures with linked lists:

- Creation and insertion: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`.
- Size management: `ft_lstsize`, `ft_lstlast`.
- Deletion and freeing: `ft_lstdelone`, `ft_lstclear`.
- Iteration and transformation: `ft_lstiter`, `ft_lstmap`.

---

### Libft function specifications

| Name | Prototype | Purpose |
|------|-----------|---------|
|[**ft_isalpha**](ft_isalpha.c)|`int ft_isalpha(int c)` |Checks whether a character is alphabetic. Returns 1 if true and 0 otherwise. |
|[**ft_isdigit**](ft_isdigit.c)|`int ft_isdigit(int c)` |Checks whether a character is a digit (0-9). Returns 1 if true and 0 otherwise.|
|[**ft_isalnum**](ft_isalnum.c)|`int ft_isalnum(int c)` |Checks whether `c` is alphabetic or numeric. Returns 1 if true and 0 otherwise. |
|[**ft_isascii**](ft_isascii.c) |`int ft_isascii(int c)` |Checks whether a character belongs to the **ASCII** table (0-127). Returns 1 if true and 0 otherwise. |
|[**ft_isprint**](ft_isprint.c) |`int ft_isprint(int c)` |Checks whether a character is printable. Returns 1 if true and 0 otherwise. |
|[**ft_tolower**](ft_tolower.c) |`int ft_tolower(int c)` |Converts character `c` to lowercase. |
|[**ft_toupper**](ft_toupper.c) | `int ft_toupper(int c)` |Converts character `c` to uppercase. |
|[**ft_bzero**](ft_bzero.c) |`void ft_bzero(void *str, size_t n)` |Clears a memory area of the specified size by filling it with zeroes. |
|[**ft_calloc**](ft_calloc.c) |`void *ft_calloc(size_t n, size_t size)` |Allocates zero-initialised memory using `malloc`. |
|[**ft_memchr**](ft_memchr.c) |`void *ft_memchr(const void *src, int c, size_t n)` |Searches for the first occurrence of byte `c` in `src`, up to `n` bytes. |
|[**ft_memcmp**](ft_memcmp.c) |`int ft_memcmp(const void *s1, const void *s2, size_t n)` |Compares two memory blocks. |
|[**ft_memcpy**](ft_memcpy.c)|`void *ft_memcpy(void *dest, const void *src, size_t n)`|Copies a block of bytes from one memory address to another.|
|[**ft_memset**](ft_memset.c) |`void *ft_memset(void *str, int c, size_t n)` |Fills a memory block with a constant value. |
|[**ft_memmove**](ft_memmove.c) |`void *ft_memmove(void *dest, const void *src, size_t n)`|Copies a memory area safely, including overlapping areas. |
|[**ft_strlen**](ft_strlen.c) |`size_t ft_strlen(const char *str)` |Calculates the length of a string. |
|[**ft_strlcpy**](ft_strlcpy.c) |`size_t ft_strlcpy(char *dst, const char *src, size_t dsize)` |Safely copies a string while controlling the destination buffer size. |
|[**ft_strlcat**](ft_strlcat.c) |`size_t tft_strlcat(char *dst, const char *src, size_t size)` |Safely concatenates strings while controlling the destination buffer size.|
|[**ft_strncmp**](ft_strncmp.c) |`int ft_strncmp(const char *s1, const char *s2, size_t n)` |Compares up to `n` characters of two strings.|
|[**ft_strchr**](ft_strchr.c) |`char *ft_strchr(const char *s, int c)` |Searches for the first occurrence of a character in a string. |
|[**ft_strrchr**](ft_strrchr.c) |`char *ft_strrchr(const char *s, int c)`|Searches for the last occurrence of a character in a string. |
|[**ft_strnstr**](ft_strnstr.c) |`char *ft_strnstr(const char *str, const char *to_find, size_t n)` |Searches for a string within the first `n` characters of another string. |
|[**ft_strdup**](ft_strdup.c) |`char *ft_strdup(const char *str)` |Duplicates a string by allocating memory with `malloc`. |
|[**ft_atoi**](ft_atoi.c) |`int ft_atoi(const char *nptr)`|Converts a string to an integer (`int`). |
|[**ft_strjoin**](ft_strjoin.c) |`char *ft_strjoin(char const *s1, char const *s2)` |Concatenates two strings into a new string allocated with `malloc`.|
|[**ft_strtrim**](ft_strtrim.c) |`char *ft_strtrim(char const *s1, char const *set)` |Removes the characters specified in `set` from the beginning and end of a string. |
|[**ft_substr**](ft_substr.c) |`char *ft_substr(char const *s, unsigned int start, size_t len)`|Extracts a substring from a string. |
|[**ft_split**](ft_split.c) |`char **ft_split(char const *s, char c)` |Splits a string using a delimiter character and returns an array of strings.|
|[**ft_itoa**](ft_itoa.c) |`char *ft_itoa(int n)`|Converts an integer (`int`) to a string. |
|[**ft_strmapi**](ft_strmapi.c) |`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` |Applies a function to each character of a string, creating a new string. |
|[**ft_striteri**](ft_striteri.c) |`void ft_striteri(char *s, void (*f)(unsigned int, char *))`|Applies a function directly to each character of a string.|
|[**ft_putchar_fd**](ft_putchar_fd.c)|`void ft_putchar_fd(char c, int fd)`|Writes character `c` to a file descriptor. |
|[**ft_putstr_fd**](ft_putstr_fd.c)|`void ft_putstr_fd(char *s, int fd)`|Writes a string to a file descriptor.|
|[**ft_putendl_fd**](ft_putendl_fd.c)|`void ft_putendl_fd(char *s, int fd)`|Writes a string followed by a newline.|
|[**ft_putnbr_fd**](ft_putnbr_fd.c)|`void ft_putnbr_fd(int n, int fd)`|Writes an integer (`int`) to a file descriptor.|
|[**ft_lstnew**](ft_lstnew.c)|`t_list *ft_lstnew(void *content)`|Creates a new node, allocating memory and storing its content.|
|[**ft_lstadd_front**](ft_lstadd_front.c)|`void ft_lstadd_front(t_list **lst, t_list *new)`|Adds a node to the beginning of a list.|
|[**ft_lstadd_back**](ft_lstadd_back.c)|`void ft_lstadd_back(t_list **lst, t_list *new)`|Adds a node to the end of a list.|
|[**ft_lstsize**](ft_lstsize.c)|`unsigned int ft_lstsize(t_list *lst)`|Counts the number of nodes in a list.|
|[**ft_lstlast**](ft_lstlast.c)|`t_list *ft_lstlast(t_list *lst)`|Returns the last node in a list. |
|[**ft_lstdelone**](ft_lstdelone.c)|`void ft_lstdelone(t_list *lst, void (*del)(void *))`|Frees a node's content and the node itself using an external function. |
|[**ft_lstclear**](ft_lstclear.c)|`void ft_lstclear(t_list **lst, void (*del)(void *))`|Deletes and frees all nodes in a list from a given node.|
|[**ft_lstiter**](ft_lstiter.c)|`void ft_lstiter(t_list *lst, void (*f)(void *))`|Iterates over a list, applying a function to each node's content.|
|[**ft_lstmap**](ft_lstmap.c)|`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))`|Applies a function to each content, creating a new resulting list.|

---

## Instructions

### Requirements

- A C compiler compatible with `-Wall`, `-Wextra` and `-Werror`.
- `make`.
- `norminette`, if you want to check the style required by 42.

### Compilation

From the project root directory:

```sh
make
```

This command compiles the source files, generates the `.o` object files and
creates the static library `libft.a`.

Object files are generated alongside the `.c` files according to the current
`Makefile` configuration.

### Cleaning

Remove object files:

```sh
make clean
```

Remove object files and the library:

```sh
make fclean
```

Clean and rebuild everything:

```sh
make re
```

### Using the library

Include the header in the program that uses the library:

```c
#include "libft.h"
```

### Checking

To check the style of the C files and header:

```sh
norminette *.c libft.h
```

A clean build is also recommended:

```sh
make fclean
make
```

## Organisation

```text
Libft/
├── Makefile
├── README.md
├── libft.h
└── ft_*.c
```

The `Makefile` keeps an explicit list of source files in `SRCS`. The `OBJS`
variable is generated by replacing the `.c` extension with `.o`, and all
objects are packaged into `libft.a`.

## Technical decisions

- A static library is used to reuse the functions without depending on an external dynamic library.
- Public declarations are gathered in `libft.h`.
- List operations use callbacks for user-defined freeing, traversal and transformation functions.
- Compilation uses `-Wall -Wextra -Werror` to detect errors and treat warnings as errors.
- The source list is explicit to control exactly which files are part of the library.
- `ft_lstsize` keeps the `unsigned int` type required by this project's contract.

## Resources

- [The Open Group: C library function specifications](https://pubs.opengroup.org/onlinepubs/9699919799/)
- [cppreference: C standard library](https://en.cppreference.com/w/c)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html)
- [GNU C Library Manual](https://sourceware.org/glibc/manual/)
- [GNU `ar` Manual](https://sourceware.org/binutils/docs/binutils/ar.html)
- Documentation and subject provided by 42 for the `libft` project.

### Use of artificial intelligence

AI was used as a support tool during the development and documentation of the
project to:

- Clarify questions about C, pointers, `const` qualifiers and memory management.
- Review the organisation and operation of the `Makefile`.
- Analyse compiler messages and `make` errors.
- Compare implementations with the prototypes in `libft.h`.

The implementation, manual review, compilation and validation of the code are
the author's responsibility. AI does not replace understanding the code or
the checks performed with the compiler, `make`, `norminette` and the project
tests.

## Author

`fradiaz`
</details>

---

*Este proyecto ha sido creado como parte del currículo de 42 por: fradiaz*

---

# Libft

Biblioteca estática de funciones en C desarrollada como primer proyecto del Common Core de 42. El objetivo es recrear funciones habituales de la biblioteca estándar de C y crear utilidades reutilizables para proyectos posteriores.

## Descripción

`libft` se ha construido desde cero para practicar fundamentos de C como la
gestión de memoria, la manipulación de cadenas, la aritmética, los punteros,
los descriptores de archivo y las estructuras enlazadas.

El resultado es la biblioteca estática `libft.a`, acompañada de la cabecera
`libft.h`, que contiene el tipo `t_list` y los prototipos públicos de las
funciones implementadas.

El proyecto incluye las funciones obligatorias de Libft y las funciones de
listas enlazadas.

<details>
 <summary>🇪🇸 Continuar en Español</summary>

---

### Funcionalidades que la componen

1. Funciones de la biblioteca estándar de C (libc)

Reescrituras exactas de las funciones nativas de C para manipular caracteres y memoria, respetando sus prototipos y comportamientos originales:

- Verificación de caracteres: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
- Conversión de mayúsculas/minúsculas: `ft_toupper`, `ft_tolower`.
- Gestión de memoria: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- Manipulación de strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- Conversión de tipos: `ft_atoi` (de texto a entero).

2. Funciones adicionales (Manipulación avanzada de strings)

Funciones que no pertenecen a la libc estándar pero que son fundamentales para proyectos posteriores:

- Substrings y concatenación: `ft_substr`, `ft_strjoin`, `ft_strtrim`.
- Reserva y división: `ft_split` (divide un string en una matriz usando un carácter delimitador).
- Conversión inversa: `ft_itoa` (de entero a texto).
- Mapeo de funciones: `ft_strmapi`, `ft_striteri` (aplican una función a cada carácter de un string).

3. Funciones de escritura (Descriptores de archivo)

Funciones diseñadas para escribir caracteres, strings o números directamente en un descriptor de archivo (fd), permitiendo salidas estándar, de error o archivos de texto:
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

4. Funciones de listas enlazadas

Herramientas para gestionar estructuras de datos dinámicas mediante listas enlazadas, cruciales para evitar el uso de arrays fijos:

- Creación y adición: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`.
- Control de tamaño: `ft_lstsize`, `ft_lstlast`.
- Eliminación y liberación: `ft_lstdelone`, `ft_lstclear`.
- Iteración y modificación: `ft_lstiter`, `ft_lstmap`.

---

### Especificaciones de las funciones de la libreria Libft

| Nombre | Prototipo | Proposito |
|--------|-----------|-----------|
|[**ft_isalpha**](ft_isalpha.c)|`int ft_isalpha(int c)` |Compueba si un caracter es alfabético. Retorna 1 si es verdadero o 0 si es falso. |
|[**ft_isdigit**](ft_isdigit.c)|`int ft_isdigit(int c)` |Compueba si un caracter es digito (0-9). Retorna 1 si es verdadero o 0 si es falso.|
|[**ft_isalnum**](ft_isalnum.c)|`int ft_isalnum(int c)` |Comprueba si el caracter c es alfabetico o numerico. Retorna 1 si es verdadero o 0 si es falso. |
|[**ft_isascii**](ft_isascii.c)|`int ft_isascii(int c)` |Comprueba si un caracter esta en la tabla **ASCII** (0-127). Retorna 1 si es verdadero o 0 si es falso. |
|[**ft_isprint**](ft_isprint.c) |`int ft_isprint(int c)` |Comprueba si un caracter es imprimible. Retorna 1 si es verdadero o 0 si es falso. |
|[**ft_tolower**](ft_tolower.c) |`int ft_tolower(int c)` |convierte  caracter `c` en minuscula. |
|[**ft_toupper**](ft_toupper.c) | `int ft_toupper(int c)` |convierte el caracter `c` en mayuscula |
|[**ft_bzero**](ft_bzero.c) |`void ft_bzero(void *str, size_t n)` |Borra un área de memoria definida por el `size` recibido, rellenándola con ceros. |
|[**ft_calloc**](ft_calloc.c) |`void *ft_calloc(size_t n, size_t size)` |Reserva memoria inicializada a cero usando `malloc`. |
|[**ft_memchr**](ft_memchr.c) |`void *ft_memchr(const void *src, int c, size_t n)` | busca la primera aparición del byte `c` en `str` hasta el tamaño maximo definido por `size`. |
|[**ft_memcmp**](ft_memcmp.c) |`int ft_memcmp(const void *s1, const void *s2, size_t n)` |Compara dos bloques de memoria. |
|[**ft_memcpy**](ft_memcpy.c)|`void *ft_memcpy(void *dest, const void *src, size_t n)`|copia un bloque de bytes de una dirección de memoria a otra.|
|[**ft_memset**](ft_memset.c) |`void *ft_memset(void *str, int c, size_t n)` |Rellena un bloque de memoria con un valor constante. |
|[**ft_memmove**](ft_memmove.c) |`void *ft_memmove(void *dest, const void *src, size_t n)`|Copia un área de memoria (permite solapamiento seguro). |
|[**ft_strlen**](ft_strlen.c) |`size_t ft_strlen(const char *str)` |Calcula la longitud de una cadena. |
|[**ft_strlcpy**](ft_strlcpy.c) |`size_t ft_strlcpy(char *dst, const char *src, size_t dsize)` | Copia cadenas de forma segura controlando el tamaño del buffer. |
|[**ft_strlcat**](ft_strlcat.c) |`size_t ft_strlcat(char *dst, const char *src, size_t size)` |Concatenan cadenas de forma segura controlando el tamaño del buffer.|
|[**ft_strncmp**](ft_strncmp.c) |`int ft_strncmp(const char *s1, const char *s2, size_t n)` |Compara hasta `n` caracteres de dos cadenas.|
|[**ft_strchr**](ft_strchr.c) |`char *ft_strchr(const char *s, int c)` |Busca la primera aparición de un carácter en una cadena. |
|[**ft_strrchr**](ft_strrchr.c) |`char *ft_strrchr(const char *s, int c)`|Busca la última aparición de un carácter en una cadena. |
|[**ft_strnstr**](ft_strnstr.c) |`char *ft_strnstr(const char *str, const char *to_find, size_t n)` |Compara hasta `n` caracteres de dos cadenas. |
|[**ft_strdup**](ft_strdup.c) |`char *ft_strdup(const char *str)` |Duplica una cadena reservando memoría haciendo uso de `malloc` |
|[**ft_atoi**](ft_atoi.c) |`int ft_atoi(const char *nptr)`|Convierte una cadena de caracteres en un número entero (`int`). |
|[**ft_strjoin**](ft_strjoin.c) |`char *ft_strjoin(char const *s1, char const *s2)` |: Concatena dos cadenas en una nueva cadena reservada con `malloc`|
|[**ft_strtrim**](ft_strtrim.c) |`char *ft_strtrim(char const *s1, char const *set)` |Elimina los caracteres especificados (`set`) del principio y del final de una cadena. |
|[**ft_substr**](ft_substr.c) |`char *ft_substr(char const *s, unsigned int start, size_t len)`|Extrae una subcadena de una cadena dada. |
|[**ft_split**](ft_split.c) |`char **ft_split(char const *s, char c)` |Divide una cadena usando un carácter (`c`) delimitador, devolviendo un array de strings.|
|[**ft_itoa**](ft_itoa.c) |`char *ft_itoa(int n)`|Convierte un número entero (`int`) en una cadena de caracteres. |
|[**ft_strmapi**](ft_strmapi.c) |`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` |Aplica una función a cada carácter de una cadena, creando una nueva cadena. |
|[**ft_striteri**](ft_striteri.c) |`void ft_striteri(char *s, void (*f)(unsigned int, char *))`|Aplica una función directamente sobre cada carácter de una cadena (modificándola).|
|[**ft_putchar_fd**](ft_putchar_fd.c)|`void ft_putchar_fd(char c, int fd)`| Escribe un carácter `c` en un descriptor de archivo. |
|[**ft_putstr_fd**](ft_putstr_fd.c)|`void ft_putstr_fd(char *s, int fd)`|Escribe una cadena en un descriptor de archivo.|
|[**ft_putendl_fd**](ft_putendl_fd.c)|`void ft_putendl_fd(char *s, int fd)`|Escribe una cadena seguida de un salto de línea.|
|[**ft_putnbr_fd**](ft_putnbr_fd.c)|`void ft_putnbr_fd(int n, int fd)`|Escribe un número entero (`int`)en un descriptor de archivo.|
|[**ft_lstnew**](ft_lstnew.c)|`t_list *ft_lstnew(void *content)`|Crea un nuevo nodo asignando memoria y guardando el contenido.|
|[**ft_lstadd_front**](ft_lstadd_front.c)|`void ft_lstadd_front(t_list **lst, t_list *new)`|Añade un nodo al principio de la lista.|
|[**ft_lstadd_back**](ft_lstadd_back.c)|`void ft_lstadd_back(t_list **lst, t_list *new)`|Añade un nodo al final de la lista.|
|[**ft_lstsize**](ft_lstsize.c)|`unsigned int ft_lstsize(t_list *lst)`|Cuenta el número de nodos de una lista.|
|[**ft_lstlast**](ft_lstlast.c)|`t_list *ft_lstlast(t_list *lst)`|Devuelve el último nodo de la lista. |
|[**ft_lstdelone**](ft_lstdelone.c)|`void ft_lstdelone(t_list *lst, void (*del)(void *))`|Libera la memoria del contenido de un nodo y el nodo en sí (usando una función externa). |
|[**ft_lstclear**](ft_lstclear.c)|`void ft_lstclear(t_list **lst, void (*del)(void *))`| Borra y libera todos los nodos de la lista a partir de uno dado.|
|[**ft_lstiter**](ft_lstiter.c)|`void ft_lstiter(t_list *lst, void (*f)(void *))`|Itera sobre la lista aplicando una función al contenido de cada nodo.|
|[**ft_lstmap**](ft_lstmap.c)|`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))`|Itera sobre la lista aplicando una función a cada contenido, creando una nueva lista resultante.|

---
## Instrucciones

### Requisitos

- Un compilador de C compatible con `-Wall`, `-Wextra` y `-Werror`.
- `make`.
- `norminette`, si se desea comprobar el estilo exigido por 42.

### Compilación

Desde el directorio `/` del proyecto:

```sh
make
```

Este comando compila los archivos fuente, genera los archivos objeto `.o` y
crea la biblioteca estática `libft.a`.

Los objetos se generan junto a los archivos `.c`, según la configuración
actual del `Makefile`.

### Limpieza

Eliminar los archivos objeto:

```sh
make clean
```

Eliminar los objetos y la biblioteca:

```sh
make fclean
```

Limpiar y recompilar todo:

```sh
make re
```
### Uso de la biblioteca

Incluye la cabecera en el programa que utilice la biblioteca:

```c
#include "libft.h"
```

### Comprobación

Para comprobar el estilo de los archivos C y de la cabecera:

```sh
norminette *.c libft.h
```

También se recomienda probar una compilación limpia:

```sh
make fclean
make
```

## Organización

```text
Libft/
├── Makefile
├── README.md
├── libft.h
└── ft_*.c
```
El `Makefile` mantiene una lista explícita de fuentes en `SRCS`. La variable
`OBJS` se obtiene sustituyendo la extensión `.c` por `.o`, y todos los objetos
se empaquetan con `ar rcs` en `libft.a`.

## Decisiones técnicas

- Se utiliza una biblioteca estática para reutilizar las funciones sin
	depender de una biblioteca dinámica externa.
- Las declaraciones públicas se concentran en `libft.h`.
- Se utilizan callbacks en las operaciones de listas para permitir funciones
	de liberación, recorrido y transformación definidas por el usuario.
- La compilación usa `-Wall -Wextra -Werror` para detectar errores y tratar
	las advertencias como errores.
- La lista de fuentes es explícita para controlar exactamente qué archivos
	forman parte de la biblioteca.
- `ft_lstsize` mantiene el tipo `unsigned int` definido por el contrato de
	este proyecto.

## Recursos

- [The Open Group: especificación de funciones de la biblioteca C](https://pubs.opengroup.org/onlinepubs/9699919799/)
- [cppreference: biblioteca estándar de C](https://en.cppreference.com/w/c)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html)
- [GNU C Library Manual](https://sourceware.org/glibc/manual/)
- [Manual de `ar` de GNU Binutils](https://sourceware.org/binutils/docs/binutils/ar.html)
- Documentación y subject proporcionados por 42 para el proyecto `libft`.

### Uso de inteligencia artificial

Se ha utilizado IA como herramienta de apoyo durante el desarrollo y la
documentación del proyecto para:

- Resolver dudas sobre C, punteros, calificadores `const` y gestión de
	memoria.
- Revisar la organización y el funcionamiento del `Makefile`.
- Analizar mensajes de compilación y errores de `make`.
- Comparar las implementaciones con los prototipos de `libft.h`.

La implementación, revisión manual, compilación y validación del código son
responsabilidad del autor. La IA no sustituye la comprensión del código ni
las comprobaciones realizadas con el compilador, `make`, `norminette` y las
pruebas del proyecto.

## Autor

`fradiaz`

</details>
