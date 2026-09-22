# Libft

Biblioteca estática de funciones en C desarrollada como primer proyecto del
Common Core de 42. El objetivo es recrear funciones habituales de la
biblioteca estándar de C y crear utilidades reutilizables para proyectos
posteriores.

## Descripción

`libft` se ha construido desde cero para practicar fundamentos de C como la
gestión de memoria, la manipulación de cadenas, la aritmética, los punteros,
los descriptores de archivo y las estructuras enlazadas.

El resultado es la biblioteca estática `libft.a`, acompañada de la cabecera
`libft.h`, que contiene el tipo `t_list` y los prototipos públicos de las
funciones implementadas.

El proyecto incluye las funciones obligatorias de Libft y las funciones bonus
de listas enlazadas.

## Características

### Caracteres y conversiones

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii` y `ft_isprint`.
- `ft_toupper` y `ft_tolower`.
- `ft_atoi`.

### Memoria

- `ft_bzero`.
- `ft_calloc`.
- `ft_memchr`, `ft_memcmp`, `ft_memcpy`, `ft_memmove` y `ft_memset`.

### Cadenas

- `ft_strlen`, `ft_strchr`, `ft_strrchr` y `ft_strncmp`.
- `ft_strlcpy`, `ft_strlcat` y `ft_strnstr`.
- `ft_strdup`, `ft_substr`, `ft_strjoin` y `ft_strtrim`.
- `ft_split`, `ft_itoa`, `ft_strmapi` y `ft_striteri`.

### Salida mediante descriptores

- `ft_putchar_fd`.
- `ft_putstr_fd`.
- `ft_putendl_fd`.
- `ft_putnbr_fd`.

### Listas enlazadas

La estructura `t_list` contiene un puntero `content` y un puntero `next`.
Las operaciones disponibles son:

- Creación y acceso: `ft_lstnew`, `ft_lstlast` y `ft_lstsize`.
- Inserción: `ft_lstadd_front` y `ft_lstadd_back`.
- Eliminación: `ft_lstdelone` y `ft_lstclear`.
- Recorrido y transformación: `ft_lstiter` y `ft_lstmap`.

## Instrucciones

### Requisitos

- Un compilador de C compatible con `-Wall`, `-Wextra` y `-Werror`.
- `make`.
- `norminette`, si se desea comprobar el estilo exigido por 42.

### Compilación

Desde el directorio `Libft`:

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

Desde la raíz del repositorio también se puede ejecutar:

```sh
make -C Libft
make -C Libft clean
make -C Libft fclean
```

### Uso de la biblioteca

Incluye la cabecera en el programa que utilice la biblioteca:

```c
#include "libft.h"
```

Compila y enlaza un programa desde el directorio `Libft` con:

```sh
cc -Wall -Wextra -Werror -I . main.c -L . -lft -o programa
```

En este comando, `-I .` permite localizar `libft.h`, `-L .` indica dónde se
encuentra `libft.a` y `-lft` enlaza la biblioteca.

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
- Ayudar a estructurar este README y mejorar la claridad de sus instrucciones.

La implementación, revisión manual, compilación y validación del código son
responsabilidad del autor. La IA no sustituye la comprensión del código ni
las comprobaciones realizadas con el compilador, `make`, `norminette` y las
pruebas del proyecto.

## Autor

`fradiaz`

