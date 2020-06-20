#include "funciones.h"

int main()
{
	char nombre_archivo[MAXWORD];
	FILE *fptr;

	/* Pregunta al usuario el nombre del archivo */
	printf("Ingrese nombre archivo: ");
	scanf("%s", nombre_archivo);

	/* Abriendo el archivo */
	fptr = fopen(nombre_archivo, "r");

	/* Si el archivo no existe o no se pudo abrir, fopen retorna NULL */
	if(fptr == NULL) {
		fprintf(stderr, "Error al intentar abrir %s.\n", nombre_archivo);
		return 1;
	}

	/* Retorna un array de dos ints, uno para las palabras y uno para los cracteres */
	int *nums = contar(fptr);

	if(nums[0] > 0)
		printf("%s tiene %d palabras y %d caracteres\n", nombre_archivo, nums[0], nums[1]);
	else
		fprintf(stderr, "Error al leer %s o archivo vacio.\n", nombre_archivo);


	/* Cierra el archivo */
	fclose(fptr);


	return 0;
}
