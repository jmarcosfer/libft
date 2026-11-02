_Este proyecto ha sido creado como parte del currículo de 42 por jmarcos._
---
# Libft

## Descripción

**Libft** es el primer proyecto del currículo de 42. Su objetivo principal es reescribir una serie de funciones de la biblioteca estándar de C (`libc`), junto con otras funciones adicionales de utilidad, para crear tu propia librería estática (`libft.a`).

Este proyecto sienta las bases de la programación en C en la escuela 42, permitiendo comprender profundamente cómo funcionan por dentro funciones fundamentales de manipulación de memoria, cadenas de caracteres, conversiones y listas enlazadas. Esta librería se utilizará y ampliará en muchos proyectos futuros del cursus.

## Instrucciones

### Compilación

Para compilar la librería y generar el archivo estático `libft.a`, utiliza el `Makefile` incluido en la raíz del repositorio con los siguientes comandos:

* **Compilar la librería principal:**
```bash
make

```

* **Limpiar los archivos objeto (`.o`):**
```bash
make clean

```

* **Limpiar archivos objeto y la librería compilada (`libft.a`):**
```bash
make fclean

```

* **Recompilar desde cero:**
```bash
make re

```

### Cómo usar

Para utilizar `libft` en tus programas, añade `#include "libft.h"` en tus archivos fuente y compila tu programa enlazando la librería:

```bash
gcc -Wall -Wextra -Werror tu_programa.c -L. -lft -o tu_programa

```

---

## Funciones Implementadas

La librería está compuesta por las siguientes funciones agrupadas por categorías:

A continuación se detallan las funciones implementadas en la librería `libft`, organizadas por categorías en formato de tabla. Se incluye la firma de cada función, una explicación detallada de los parámetros que espera y su propósito general.

---

### 1. Funciones de la Libc

#### Caracteres y Conversión

| Función (Firma) | Parámetros | Descripción |
| --- | --- | --- |
| `int ft_isalpha(int c);` | **`c`**: El carácter (representado como entero) a evaluar. | Comprueba si el carácter es una letra alfabética (mayúscula o minúscula). |
| `int ft_isdigit(int c);` | **`c`**: El carácter a evaluar. | Comprueba si el carácter es un dígito numérico (`0`-`9`). |
| `int ft_isalnum(int c);` | **`c`**: El carácter a evaluar. | Comprueba si el carácter es alfanumérico (letra o número). |
| `int ft_isascii(int c);` | **`c`**: El carácter a evaluar. | Comprueba si el carácter pertenece al conjunto ASCII estándar (`0`-`127`). |
| `int ft_isprint(int c);` | **`c`**: El carácter a evaluar. | Comprueba si el carácter es imprimible (incluyendo el espacio). |
| `int ft_toupper(int c);` | **`c`**: El carácter a convertir. | Convierte una letra minúscula en su equivalente en mayúscula. |
| `int ft_tolower(int c);` | **`c`**: El carácter a convertir. | Convierte una letra mayúscula en su equivalente en minúscula. |
| `int ft_atoi(const char *nptr);` | **`nptr`**: Puntero a la cadena de caracteres que representa un número. | Convierte una cadena de caracteres inicial en un número entero (`int`). |

#### Memoria

| Función (Firma) | Parámetros | Descripción |
| --- | --- | --- |
| `void *ft_memset(void *s, int c, size_t n);` | **`s`**: Puntero al área de memoria.|

|**`c`**: Valor a establecer (convertido a `unsigned char`).|

|**`n`**: Número de bytes a rellenar. | Rellena los primeros `n` bytes del área de memoria apuntada por `s` con el byte `c`. |
| `void ft_bzero(void *s, size_t n);` | **`s`**: Puntero al área de memoria.|

|**`n`**: Número de bytes a poner a cero. | Escribe ceros en los primeros `n` bytes del área de memoria apuntada por `s`. |
| `void *ft_memcpy(void *dest, const void *src, size_t n);` | **`dest`**: Puntero al destino.|

|**`src`**: Puntero al origen.|

|**`n`**: Número de bytes a copiar. | Copia `n` bytes desde el área de memoria `src` a `dest` (las áreas no deben solaparse). |
| `void *ft_memmove(void *dest, const void *src, size_t n);` | **`dest`**: Puntero al destino.|

|**`src`**: Puntero al origen.|

|**`n`**: Número de bytes a copiar. | Copia `n` bytes desde `src` a `dest`, permitiendo de manera segura áreas de memoria solapadas. |
| `void *ft_memchr(const void *s, int c, size_t n);` | **`s`**: Puntero al área de memoria a examinar.|

|**`c`**: Carácter (byte) a buscar.|

|**`n`**: Número máximo de bytes a revisar. | Busca la primera aparición del byte `c` en los primeros `n` bytes del área de memoria `s`. |
| `int ft_memcmp(const void *s1, const void *s2, size_t n);` | **`s1`**, **`s2`**: Punteros a las dos áreas de memoria.|

|**`n`**: Número de bytes a comparar. | Compara los primeros `n` bytes de las áreas de memoria `s1` y `s2`. |
| `void *ft_calloc(size_t nmemb, size_t size);` | **`nmemb`**: Número de elementos a asignar.|

|**`size`**: Tamaño en bytes de cada elemento. | Reserva memoria dinámica para un array de `nmemb` elementos de `size` bytes cada uno y la inicializa a cero. |

#### Cadenas de Caracteres

| Función (Firma) | Parámetros | Descripción |
| --- | --- | --- |
| `size_t ft_strlen(const char *s);` | **`s`**: La cadena de caracteres. | Calcula la longitud de la cadena `s` (sin contar el carácter nulo final). |
| `size_t ft_strlcpy(char *dst, const char *src, size_t size);` | **`dst`**: Buffer de destino.|

|**`src`**: Cadena de origen.|

|**`size`**: Tamaño total del buffer de destino. | Copia cadenas de forma segura asegurando que el destino termine en `\0` y no desborde. |
| `size_t ft_strlcat(char *dst, const char *src, size_t size);` | **`dst`**: Buffer de destino (cadena existente).|

|**`src`**: Cadena a concatenar.|

|**`size`**: Tamaño total del buffer de destino. | Concatena la cadena `src` al final de `dst` de forma segura y limitada por `size`. |
| `char *ft_strchr(const char *s, int c);` | **`s`**: Cadena donde buscar.|

|**`c`**: Carácter a buscar. | Localiza la primera aparición del carácter `c` en la cadena `s`. |
| `char *ft_strrchr(const char *s, int c);` | **`s`**: Cadena donde buscar.|

|**`c`**: Carácter a buscar. | Localiza la última aparición del carácter `c` en la cadena `s`. |
| `int ft_strncmp(const char *s1, const char *s2, size_t n);` | **`s1`**, **`s2`**: Cadenas a comparar.|

|**`n`**: Número máximo de caracteres a comparar. | Compara hasta `n` caracteres de las cadenas `s1` y `s2`. |
| `char *ft_strnstr(const char *big, const char *little, size_t len);` | **`big`**: Cadena principal.|

|**`little`**: Subcadena a buscar.|

|**`len`**: Límite de caracteres a revisar en `big`. | Busca la primera aparición de la subcadena `little` dentro de `big`, revisando un máximo de `len` bytes. |
| `char *ft_strdup(const char *s);` | **`s`**: Cadena a duplicar. | Duplica la cadena `s` reservando memoria dinámicamente para la nueva copia. |

---

### 2. Funciones Adicionales

| Función (Firma) | Parámetros | Descripción |
| --- | --- | --- |
| `char *ft_substr(const char *s, unsigned int start, size_t len);` | **`s`**: Cadena original.|

|**`start`**: Índice de inicio en `s`.|

|**`len`**: Longitud máxima de la subcadena. | Extrae una subcadena de `s` empezando en `start` con una longitud máxima de `len` (reserva memoria). |
| `char *ft_strjoin(const char *s1, const char *s2);` | **`s1`**, **`s2`**: Las dos cadenas a unir. | Reserva memoria y concatena `s1` y `s2` en una nueva cadena resultante. |
| `char *ft_strtrim(const char *s1, const char *set);` | **`s1`**: Cadena a recortar.|

|**`set`**: Conjunto de caracteres a eliminar. | Elimina todos los caracteres indicados en `set` que se encuentren al principio y al final de `s1`. |
| `char **ft_split(const char *s, char c);` | **`s`**: Cadena a dividir.|

|**`c`**: Carácter delimitador. | Divide la cadena `s` usando el carácter `c` como delimitador, devolviendo un array de strings terminado en `NULL`. |
| `char *ft_itoa(int n);` | **`n`**: Número entero a convertir. | Convierte un número entero `n` en una cadena de caracteres alojada en memoria dinámica. |
| `char *ft_strmapi(const char *s, char (*f)(unsigned int, char));` | **`s`**: Cadena a iterar.|

|**`f`**: Función a aplicar a cada carácter (recibe índice y carácter). | Aplica la función `f` a cada carácter de `s`, creando una nueva cadena con los resultados. |
| `void ft_striteri(const char *s, void (*f)(unsigned int, char*));` | **`s`**: Cadena a iterar.|

|**`f`**: Función a aplicar (recibe índice y puntero al carácter). | Aplica la función `f` a cada carácter de `s` pasando su dirección (modifica la cadena in situ). |
| `void ft_putchar_fd(char c, int fd);` | **`c`**: Carácter a escribir.|

|**`fd`**: Descriptor de archivo (`file descriptor`). | Escribe el carácter `c` en el descriptor de archivo especificado. |
| `void ft_putstr_fd(const char *s, int fd);` | **`s`**: Cadena a escribir.|

|**`fd`**: Descriptor de archivo. | Escribe la cadena `s` en el descriptor de archivo especificado. |
| `void ft_putendl_fd(const char *s, int fd);` | **`s`**: Cadena a escribir.|

|**`fd`**: Descriptor de archivo. | Escribe la cadena `s` seguida de un salto de línea en el descriptor de archivo. |
| `void ft_putnbr_fd(int n, int fd);` | **`n`**: Número entero a escribir.|

|**`fd`**: Descriptor de archivo. | Escribe el número entero `n` en el descriptor de archivo especificado. |

---

### 3. Listas enlazadas

| Función (Firma) | Parámetros | Descripción |
| --- | --- | --- |
| `t_list *ft_lstnew(void *content);` | **`content`**: El contenido con el que se inicializará el nodo. | Crea un nuevo nodo de lista reservando memoria, asignando `content` y poniendo `next` a `NULL`. |
| `void ft_lstadd_front(t_list **lst, t_list *new);` | **`lst`**: Puntero al primer nodo de la lista.|

|**`new`**: El nodo que se va a añadir. | Añade el nodo `new` al principio de la lista enlazada. |
| `int ft_lstsize(t_list *lst);` | **`lst`**: El primer nodo de la lista. | Cuenta y devuelve el número de elementos contenidos en la lista enlazada. |
| `t_list *ft_lstlast(t_list *lst);` | **`lst`**: El primer nodo de la lista. | Devuelve el último nodo de la lista enlazada. |
| `void ft_lstadd_back(t_list **lst, t_list *new);` | **`lst`**: Puntero al primer nodo de la lista.|

|**`new`**: El nodo que se va a añadir. | Añade el nodo `new` al final de la lista enlazada. |
| `void ft_lstdelone(t_list *lst, void (*del)(void*));` | **`lst`**: El nodo a liberar.|

|**`del`**: Función para liberar el contenido del nodo. | Libera la memoria del contenido del nodo usando `del` y luego libera el nodo en sí. |
| `void ft_lstclear(t_list **lst, void (*del)(void*));` | **`lst`**: Puntero al primer nodo de la lista.|

|**`del`**: Función para liberar el contenido de los nodos. | Elimina y libera todos los nodos de la lista de forma consecutiva, dejando el puntero principal a `NULL`. |
| `void ft_lstiter(t_list *lst, void (*f)(void *));` | **`lst`**: Puntero al primer nodo.|

|**`f`**: Función a aplicar sobre el contenido de cada nodo. | Itera sobre la lista aplicando la función `f` al contenido de cada nodo. |
| `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | **`lst`**: Puntero al primer nodo.|

|**`f`**: Función a aplicar al contenido.|

|**`del`**: Función para liberar contenido si falla la asignación. | Itera aplicando `f` al contenido de cada nodo y crea una *nueva* lista con los resultados. |

---

---

## Recursos y Uso de IA

### Recursos de Referencia

* **Man pages:** Documentación oficial de Linux/Unix (`man 3 <función>`).
* **Documentación de C estándar:** Referencias sobre tipos de datos, punteros y gestión de memoria.
* **Tester de la comunidad:** Uso de testers públicos (como `libft-unit-test` o `Tripouille/libftTester`) para verificar la robustez de las funciones.

### Uso de Inteligencia Artificial (IA)

En la realización de este proyecto, la IA se ha utilizado de forma complementaria para:

* **Estructuración y redacción:** Creación de plantillas para este archivo `README.md`.
* **Comprensión de conceptos:** Explicación teórica sobre el funcionamiento avanzado de punteros a funciones y gestión de memoria dinámica en C.
* **Resolución de dudas de depuración:** Análisis conceptual de casos límite (edge cases) en funciones complejas como `ft_split` o `ft_strtrim`.
