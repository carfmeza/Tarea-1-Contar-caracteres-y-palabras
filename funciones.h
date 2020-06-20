#include <stdio.h>

#define MAXWORD 80

/**
 * Función contar_palabras cuenta el número de palabras en un archivo, asume que las palabras están
 * separadas por espacios o salto de línea "\n".
 *
 * @param archivo Puntero al archivo, asumir solo lectura.
 *
 * @return Número de palabras en el archivo. -1 si hubo error.
 */
int * contar(FILE *archivo);
