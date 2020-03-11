listadobleligada.o: listadobleligada.c
	gcc listadobleligada.c -c -Wall
main.o: main.c
	gcc main.c -c -Wall

a.out: main.o listadobleligada.o
	gcc main.o listadobleligada.o

run: a.out
	./a.out

clean:
	rm -f *.o a.out
