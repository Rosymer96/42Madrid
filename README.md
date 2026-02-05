# Libft - @42Madrid

## 🗣️ Introducción
Este es mi primer proyecto en 42 Madrid. Consiste en una librería en C que recrea funciones estándar de la `libc`, además de incluir funciones adicionales para la manipulación de memoria, strings y listas enlazadas.

## 🛠️ Compilación
El proyecto incluye un `Makefile` con las reglas estándar exigidas:

| Comando | Acción |
| :--- | :--- |
| `make` | Compila la librería `libft.a`. |
| `make clean` | Borra los archivos objetos (`.o`). |
| `make fclean` | Borra los objetos y la librería `libft.a`. |
| `make re` | Ejecuta `fclean` y `make` (recompila todo). |

## 📚 Funciones Realizadas

### Parte 1: Funciones de libc
* `ft_isalpha` - Comprueba si es un carácter alfabético.
* `ft_isdigit` - Comprueba si es un dígito.
* `ft_isalnum` - Comprueba si es alfanumérico.
* `ft_isascii` - Comprueba si es un carácter ASCII.
* `ft_isprint` - Comprueba si es un carácter imprimible.
* `ft_strlen` - Calcula la longitud de un string.
* `ft_memset` - Llena la memoria con un byte constante.
* `ft_bzero` - Pone a cero un string.
* `ft_memcpy` - Copia un área de memoria.
* `ft_memmove` - Copia un área de memoria evitando solapamientos.
* `ft_strlcpy` - Copia un string a un tamaño específico.
* `ft_strlcat` - Concatena un string a un tamaño específico.
* `ft_toupper` - Convierte a mayúscula.
* `ft_tolower` - Convierte a minúscula.
* `ft_strchr` - Localiza un carácter en un string.
* `ft_strrchr` - Localiza un carácter en un string (desde el final).
* `ft_strncmp` - Compara dos strings (n caracteres).
* `ft_memchr` - Localiza un byte en la memoria.
* `ft_memcmp` - Compara dos áreas de memoria.
* `ft_strnstr` - Localiza un substring en un string.
* `ft_atoi` - Convierte un string en entero.
* `ft_calloc` - Reserva memoria y la inicializa a cero.
* `ft_strdup` - Duplica un string.

### Parte 2: Funciones adicionales
* `ft_substr` - Crea un substring de un string.
* `ft_strjoin` - Concatena dos strings en uno nuevo.
* `ft_strtrim` - Elimina caracteres específicos del inicio y final.
* `ft_split` - Divide un string por un carácter delimitador.
* `ft_itoa` - Convierte un entero en string.
* `ft_strmapi` - Aplica una función a cada carácter (creando un nuevo string).
* `ft_striteri` - Aplica una función a cada carácter (modificando el original).
* `ft_putchar_fd` - Escribe un carácter en un file descriptor.
* `ft_putstr_fd` - Escribe un string en un file descriptor.
* `ft_putendl_fd` - Escribe un string seguido de un salto de línea.
* `ft_putnbr_fd` - Escribe un número en un file descriptor.

### Bonus: Funciones de Listas
* `ft_lstnew` - Crea un nuevo nodo.
* `ft_lstadd_front` - Añade un nodo al principio de la lista.
* `ft_lstsize` - Cuenta los elementos de la lista.
* `ft_lstlast` - Devuelve el último nodo.
* `ft_lstadd_back` - Añade un nodo al final de la lista.
* `ft_lstdelone` - Elimina un nodo liberando su contenido.
* `ft_lstclear` - Elimina y libera toda la lista.
* `ft_lstiter` - Itera la lista aplicando una función.
* `ft_lstmap` - Itera y crea una nueva lista tras aplicar una función.

## 🧪 Testing
Este proyecto ha sido testeado con **Tripouille/libftTester**, pasando todas las pruebas de funcionalidad y gestión de memoria (Valgrind).

---
Desarrollado por **rosvela** (rosvela@student.42madrid.com)
