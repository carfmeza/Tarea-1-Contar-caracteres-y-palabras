#include "funciones.h"
#include <string.h>

int * contar(FILE *archivo)
{
	static int n[] = {0, 0};
	char placeholder[MAXWORD];

	int f = fscanf(archivo, "%s", placeholder);
	while (f > 0){
		n[0]++;
		f = fscanf(archivo, "%s", placeholder);
		/* Para hola.txt, el conteo es 42 si se toman en cuenta el salto de linea */
		/* El conteo de 42 se confirma con un programa que hace lo mismo en Python y contando a mano */
		n[1] = n[1] + strlen(placeholder);
	}

	return n;
}
