# ascii_rush

Proyecto pequeño que contiene implementaciones en C para generar rectángulos ASCII.

Propósito
- Proveer ejemplos sencillos de funciones que dibujan rectángulos y bordes en la salida estándar.
- Servir como proyecto de muestra para practicar compilación y pruebas de ejecución.

Estructura
- `ex00/` : Implementaciones y un `main.c` de prueba.
  - `ft_putchar.c` : Función auxiliar para escribir un carácter.
  - `rush00.c` ... `rush04.c` : Variantes de funciones que dibujan rectángulos.
  - `main.c` : Programa de ejemplo que permite elegir y ejecutar una de las variantes.

Cómo compilar

para reproducir en local puedes hacer 

``` 
git clone https://github.com/guizafj/Inicio_logico_C.git
cd assii_rush/ex00
```

Desde la raíz del proyecto (donde se encuenta el main.c):

```bash
cc -Wall -Wextra -Werror *.c -o ascii_test
```

Cómo ejecutar

```bash
./ascii_test 5 3      # Ejecuta la variante por defecto
./ascii_test 5 3 1    # Ejecuta rush00
./ascii_test 5 3 2    # Ejecuta rush01
```

Licencia
- Uso libre para fines educativos y personales.
