*Este proyecto ha sido creado como parte del currículo de 42 por: fradiaz*

---
# Libft

Biblioteca estática de funciones en C desarrollada como primer proyecto del
Common Core de 42. El objetivo es recrear funciones habituales de la
biblioteca estándar de C y crear utilidades reutilizables para proyectos
posteriores.

## Description

`libft` se ha construido desde cero para practicar fundamentos de C como la
gestión de memoria, la manipulación de cadenas, la aritmética, los punteros,
los descriptores de archivo y las estructuras enlazadas.

El resultado es la biblioteca estática `libft.a`, acompañada de la cabecera
`libft.h`, que contiene el tipo `t_list` y los prototipos públicos de las
funciones implementadas.

El proyecto incluye las funciones obligatorias de Libft y las funciones de listas enlazadas.

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
|**ft_isalpha**|`int ft_isalpha(int c)` |Compueba si un caracter es alfabético. Retorna 1 si es verdadero o 0 si es falso. |
|**ft_isdigit**|`int ft_isdigit(int c)` |Compueba si un caracter es digito (0-9). Retorna 1 si es verdadero o 0 si es falso.|
| **ft_isalnum**|`int ft_isalnum(int c)` |Comprueba si el caracter c es alfabetico o numerico. Retorna 1 si es verdadero o 0 si es falso. |
|**ft_isascii** |`int ft_isascii(int c)` |Comprueba si un caracter esta en la tabla **ASCII** (0-127). Retorna 1 si es verdadero o 0 si es falso. |
|**ft_isprint** |`int ft_isprint(int c)` |Comprueba si un caracter es imprimible. Retorna 1 si es verdadero o 0 si es falso. |
|**ft_tolower** |`int ft_tolower(int c)` |convierte  caracter `c` en minuscula. |
|**ft_toupper** | `int ft_toupper(int c)` |convierte el caracter `c` en mayuscula |
|**ft_bzero** |`void ft_bzero(void *str, size_t n)` |Borra un área de memoria definida por el `size` recibido, rellenándola con ceros. |
|**ft_calloc** |`void *ft_calloc(size_t n, size_t size)` |Reserva memoria inicializada a cero usando `malloc`. |
|**ft_memchr** |`void *ft_memchr(const void *src, int c, size_t n)` | busca la primera aparición del byte `c` en `str` hasta el tamaño maximo definido por `size`. |
|**ft_memcmp** |`void *ft_memcpy(void *dest, const void *src, size_t n)` |Compara dos bloques de memoria. |
|**ft_memset** |`void *ft_memset(void *str, int c, size_t n)` |Rellena un bloque de memoria con un valor constante. |
|**ft_memmove** |`void *ft_memmove(void *dest, const void *src, size_t n)`|Copia un área de memoria (permite solapamiento seguro). |
|**ft_strlen** |`size_t ft_strlen(const char *str)` |Calcula la longitud de una cadena. |
|**ft_strlcpy** |`size_t ft_strlcpy(char *dst, const char *src, size_t dsize)` | Copia cadenas de forma segura controlando el tamaño del buffer. |
|**ft_strlcat** |`size_t			ft_strlcat(char *dst, const char *src, size_t size)` |Concatenan cadenas de forma segura controlando el tamaño del buffer.|
|**ft_strncmp** |`int ft_strncmp(const char *s1, const char *s2, size_t n)` |Compara hasta `n` caracteres de dos cadenas.|
|**ft_strchr** |`char *ft_strchr(const char *s, int c)` |Busca la primera aparición de un carácter en una cadena. |
|**ft_strrchr** |`char *ft_strrchr(const char *s, int c)`|Busca la última aparición de un carácter en una cadena. |
|**ft_strnstr** |`char *ft_strnstr(const char *str, const char *to_find, size_t n)` |Compara hasta `n` caracteres de dos cadenas. |
|**ft_strdup** |`char *ft_strdup(const char *str)` |Duplica una cadena reservando memoría haciendo uso de `malloc` |
|**ft_atoi** |`int ft_atoi(const char *nptr)`|Convierte una cadena de caracteres en un número entero (`int`). |
|**ft_strjoin** |`char *ft_strjoin(char const *s1, char const *s2)` |: Concatena dos cadenas en una nueva cadena reservada con `malloc`.|
|**ft_strtrim** |`char *ft_strtrim(char const *s1, char const *set)` |Elimina los caracteres especificados (`set`) del principio y del final de una cadena. |
|**ft_substr** |`char *ft_substr(char const *s, unsigned int start, size_t len)`|Extrae una subcadena de una cadena dada. |
|**ft_split** |`char **ft_split(char const *s, char c)` |Divide una cadena usando un carácter (`c`) delimitador, devolviendo un array de strings.|
|**ft_itoa** |`char *ft_itoa(int n)`|Convierte un número entero (`int`) en una cadena de caracteres. |
|**ft_strmapi** |`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` |Aplica una función a cada carácter de una cadena, creando una nueva cadena. |
|**ft_striteri** |`void ft_striteri(char *s, void (*f)(unsigned int, char *))`|Aplica una función directamente sobre cada carácter de una cadena (modificándola).|
|**ft_putchar_fd**|`void ft_putchar_fd(char c, int fd)`| Escribe un carácter `c` en un descriptor de archivo. |
|**ft_putstr_fd**|`void ft_putstr_fd(char *s, int fd)`|Escribe una cadena en un descriptor de archivo.|
|**ft_putendl_fd**|`void ft_putendl_fd(char *s, int fd)`|Escribe una cadena seguida de un salto de línea.|
|**ft_putnbr_fd**|`void ft_putnbr_fd(int n, int fd)`|Escribe un número entero (`int`)en un descriptor de archivo.|
|**ft_lstnew**|`t_list *ft_lstnew(void *content)`|Crea un nuevo nodo asignando memoria y guardando el contenido.|
|**ft_lstadd_front**|`void ft_lstadd_front(t_list **lst, t_list *new)`|Añade un nodo al principio de la lista.|
|**ft_lstadd_back**|`void ft_lstadd_back(t_list **lst, t_list *new)`|Añade un nodo al final de la lista.|
|**ft_lstsize**|`unsigned int ft_lstsize(t_list *lst)`|Cuenta el número de nodos de una lista.|
|**ft_lstlast**|`t_list *ft_lstlast(t_list *lst)`|Devuelve el último nodo de la lista. |
|**ft_lstdelone**|`void ft_lstdelone(t_list *lst, void (*del)(void *))`|Libera la memoria del contenido de un nodo y el nodo en sí (usando una función externa). |
|**ft_lstclear**|`void ft_lstclear(t_list **lst, void (*del)(void *))`| Borra y libera todos los nodos de la lista a partir de uno dado.|
|**ft_lstiter**|`void ft_lstiter(t_list *lst, void (*f)(void *))`|Itera sobre la lista aplicando una función al contenido de cada nodo.|
|**ft_lstmap**|`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))`|Itera sobre la lista aplicando una función a cada contenido, creando una nueva lista resultante.|

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


