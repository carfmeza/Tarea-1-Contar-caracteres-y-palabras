# Tarea 1: Contar caracteres y palabras
Tarea que consiste en crear un programa simple en C que cuenta el número de palabras y caracteres en un archivo de texto.
El programa debe ser compilado usando la herramienta de gestión de compilación *make*.

## Ejemplo de funcionamiento del programa
Asumiendo que el archivo *hola.txt* tiene el siguiente contenido:
```
hola mundo!
hola programacion de sistemas!
```
El programa tiene el siguiente comportamiento (el nombre del ejecutables es *contador*):
```
$>./contador
Ingrese el nombre del archivo: hola.txt
hola.txt tiene 6 palabras y 43 caracteres
```

## Compilación con make
El archivo *Makefile* se usa para compilar el programa de manera eficiente, es decir, es sensible al cambio en archivos individuales y en cabeceras.

Para compilar el programa:
```
$ make
```

Para limpiar archivos temporales y ejecutables:
```
$ make clean
```
