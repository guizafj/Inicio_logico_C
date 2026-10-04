*Este proyecto ha sido creado como parte del currículo de 42 por fradiaz*

# get_next_line

## Descripción

`get_next_line` es un proyecto del currículo de 42 cuyo objetivo es implementar
una función capaz de devolver una línea de un descriptor de archivo en cada
llamada:

```c
char *get_next_line(int fd);
```

La función lee el archivo por bloques de tamaño `BUFFER_SIZE` y devuelve la
siguiente línea, incluyendo el salto de línea cuando existe. Cuando se alcanza
el final del archivo, devuelve `NULL`.

El repositorio contiene dos versiones:

- **Parte obligatoria:** gestiona un descriptor de archivo mediante un `stash`
	estático.
- **Parte bonus:** permite leer varios descriptores alternándolos, conservando
	un `stash` independiente para cada uno.

También se implementan las funciones auxiliares necesarias para trabajar con
cadenas: longitud, búsqueda de caracteres, duplicación, concatenación y
extracción de subcadenas.

<details>
 <summary>🇪🇸 Continuar en Español</summary>

## Instrucciones

### Requisitos

- Un compilador compatible con C, como `gcc` o `clang`.
- Las funciones estándar `read`, `malloc` y `free` disponibles en el sistema.

### Compilación de la parte obligatoria

Este proyecto implementa una función, no un programa autónomo. Los archivos
fuente contienen un `main` de prueba, pero permanece comentado para que el
proyecto pueda evaluarse con los tests correspondientes. Durante la evaluación
puede descomentarse para generar un ejecutable de prueba, por ejemplo:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o test
```

Después de la compilación es posible verificar su funcionamiento:

```bash
 ./test README.md
```

`BUFFER_SIZE` puede cambiarse durante la compilación, por ejemplo con
`-D BUFFER_SIZE=1` o `-D BUFFER_SIZE=1024`. Si no se define, los encabezados
utilizan el valor predeterminado `42`.

### Compilación de la parte bonus

Para compilar los archivos de la versión bonus, deben utilizarse
los archivos bonus y su encabezado:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42  get_next_line_bonus.c get_next_line_utils_bonus.c -o test_bonus
```

Si se desea generar un ejecutable de prueba, puede descomentarse el `main` de
prueba durante la evaluación o enlazarse con un `main.c` externo.

Después de la compilación es posible verificar su funcionamiento:

```bash
 ./test_bonus
```

Un uso típico consiste en abrir un archivo, llamar repetidamente a
`get_next_line(fd)` hasta recibir `NULL` y liberar cada línea devuelta con
`free`.

## Algoritmo y decisiones técnicas

El algoritmo elegido es una lectura incremental con almacenamiento persistente:

1. En la primera llamada para un descriptor, se inicializa su `stash` como una
	 cadena vacía.
2. Se reserva un buffer de `BUFFER_SIZE + 1` bytes para poder añadir el
	 terminador `\0`.
3. Se llama a `read` y se añade el bloque leído al `stash`.
4. Se repite la lectura mientras el `stash` no contenga `\n` y no se alcance el
	 final del archivo.
5. Cuando aparece un salto de línea, se separa la parte correspondiente a la
	 línea y se conserva en el `stash` el texto posterior para la siguiente
	 llamada.
6. Si no queda ningún salto de línea pero todavía hay texto, ese texto se
	 devuelve como la última línea del archivo.
7. Al llegar al final y no quedar datos, se libera el estado pendiente y se
	 devuelve `NULL`.

La decisión de conservar un `stash` estático es necesaria porque una llamada a
`read` puede devolver varias líneas o solamente una parte de una línea. Sin
este estado persistente, los caracteres que sobran después de devolver una
línea se perderían. En la versión bonus, el estado se indexa por descriptor,
lo que permite alternar lecturas de varios archivos sin mezclar sus datos.

Este enfoque mantiene una interfaz sencilla: el usuario solo necesita pasar un
descriptor y liberar la cadena recibida. Además, funciona con archivos de
cualquier longitud y con líneas que no caben en un único bloque de lectura.
El coste de lectura es proporcional a los datos procesados. Como cada
concatenación crea una nueva cadena y copia el contenido acumulado, una línea
muy larga puede producir un coste temporal acumulado aproximado de $O(n^2)$ y
un uso de memoria máximo proporcional al tamaño de la línea pendiente, $O(n)$.

## Recursos

- `man 2 read`: comportamiento de la lectura desde un descriptor y gestión de
	errores.
- `man 2 open`: apertura de archivos y obtención de descriptores.
- `man 3 malloc` y `man 3 free`: reserva y liberación de memoria dinámica.
- [POSIX `read`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/read.html): especificación de la llamada utilizada.
- Documentación y subject oficial del proyecto **get_next_line** de 42:
	requisitos, casos límite y comportamiento esperado de la función.

### Uso de inteligencia artificial

Se ha utilizado inteligencia artificial como apoyo durante la redacción y la
revisión del proyecto. En concreto, se empleó para:

- organizar y redactar esta documentación;
- revisar que el README incluyera descripción, instrucciones, recursos y la
	explicación del algoritmo;
- ayudar a expresar el flujo de lectura, la gestión del `stash` y el análisis
	aproximado de complejidad.
- Consulta y explicación del funcionamiento de las variables estaticas.

La implementación, las decisiones de diseño y la validación del código forman
parte del trabajo del autor. La IA no sustituye la comprensión del código ni
la comprobación manual de sus casos límite, como archivos vacíos, líneas muy
largas, archivos sin salto de línea final y lecturas alternadas en la versión
bonus.
</details>

---

### Description

`get_next_line` is a project from the 42 curriculum. Its goal is to implement a
function that returns one line from a file descriptor on each call:

```c
char *get_next_line(int fd);
```

The function reads the file in blocks of `BUFFER_SIZE` bytes and returns the
next line, including the newline character when one is present. When the end of
the file is reached, it returns `NULL`.

This repository contains two versions:

- **Mandatory part:** manages one file descriptor with a static `stash`.
- **Bonus part:** supports alternating between several file descriptors by
  keeping an independent `stash` for each one.

The project also implements the helper functions needed for string handling:
length calculation, character searching, duplication, concatenation and
substring extraction.

<details>
 <summary>🇬🇧 Continue in English</summary>

### Instructions

#### Requirements

- A C compiler such as `gcc` or `clang`.
- The standard `read`, `malloc` and `free` functions available on the system.

#### Compiling the mandatory part

This project implements a function rather than a standalone program. The
source files contain a test `main`, but it remains commented so the project can
be evaluated with the appropriate tests. During evaluation, it can be
uncommented to create a test executable, for example:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o test
```

The resulting program can be tested with:

```bash
./test README.md
```

`BUFFER_SIZE` can be changed at compile time, for example with
`-D BUFFER_SIZE=1` or `-D BUFFER_SIZE=1024`. If it is not defined, the headers
use the default value `42`.

#### Compiling the bonus part

To compile the bonus source files, use the bonus source files and
header:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c -o test_bonus
```

To create a test executable, the test `main` can be uncommented during
evaluation, or the sources can be linked with an external `main.c`.

The resulting program can be tested with:

```bash
./test_bonus
```

A typical use consists of opening a file, repeatedly calling
`get_next_line(fd)` until it returns `NULL`, and freeing every returned line
with `free`.

### Algorithm and technical decisions

The selected algorithm is incremental reading with persistent storage:

1. On the first call for a descriptor, its `stash` is initialized as an empty
	string.
2. A buffer of `BUFFER_SIZE + 1` bytes is allocated so that the terminating
	`\0` can be added.
3. `read` is called and the block read is appended to the `stash`.
4. Reading continues while the `stash` does not contain `\n` and the end of the
	file has not been reached.
5. When a newline is found, the line is separated from the remaining text, and
	the remaining text is kept in the `stash` for the next call.
6. If no newline remains but there is still text, that text is returned as the
	last line of the file.
7. When the end of the file is reached and no data remains, the pending state
	is freed and `NULL` is returned.

Keeping a static `stash` is necessary because one `read` call can return
several lines or only part of a line. Without persistent state, the characters
left over after returning a line would be lost. In the bonus version, the state
is indexed by file descriptor, allowing several files to be read alternately
without mixing their data.

This approach provides a simple interface: the caller only needs to pass a
descriptor and free the returned string. It also works with files of any length
and with lines that do not fit into a single read block. Since each
concatenation creates a new string and copies the accumulated content, a very
long line can lead to an approximate accumulated time cost of $O(n^2)$ and a
maximum memory usage proportional to the pending line size, $O(n)$.

### Resources

- `man 2 read`: reading from a file descriptor and error handling.
- `man 2 open`: opening files and obtaining file descriptors.
- `man 3 malloc` and `man 3 free`: dynamic memory allocation and deallocation.
- [POSIX `read`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/read.html): specification of the system call used by the project.
- The official 42 **get_next_line** subject and documentation: project
  requirements, edge cases and expected function behavior.

#### Artificial intelligence usage

Artificial intelligence was used as support during the writing and review of
the project. It was used specifically to:

- organize and write this documentation;
- check that the README included the description, instructions, resources and
  algorithm explanation;
- help explain the reading flow, `stash` management and approximate complexity
  analysis;
- explain how static variables work.

The implementation, design decisions and code validation remain the author's
responsibility. AI does not replace understanding the code or manually checking
edge cases such as empty files, very long lines, files without a final newline
and alternating reads in the bonus version.
</details>
