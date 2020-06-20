contador: main.o funciones.o
	gcc -o contador main.o funciones.o

main.o: main.c funciones.h
	gcc -c -o main.o main.c

funciones.o: funciones.c funciones.h
	gcc -c -o funciones.o funciones.c

.PHONY: clean
clean:
	rm -f contador *.o
