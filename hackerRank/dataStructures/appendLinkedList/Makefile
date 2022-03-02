insertarfinal.o: insertarfinal.c
	gcc insertarfinal.c -c -Wall

main.o: main.c
	gcc main.c -c -Wall

a.out: main.o insertarfinal.o
	gcc main.o insertarfinal.o

run: a.out
	./a.out

clean:
	rm -f *.o a.out
