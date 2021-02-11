c113c: clex.o main.o cgram.tab.o
	gcc -Wall -o c113c clex.o main.o cgram.tab.o

main.o: main.c
	gcc -g -Wall -c main.c

clex.c: clex.l cgram.tab.h
	flex -o clex.c clex.l

clex.o: clex.c
	gcc -g -Wall -c clex.c

cgram.tab.o: cgram.tab.c
	gcc -g -Wall -c cgram.tab.c

cgram.tab.h cgram.tab.c: cgram.y
	bison -d cgram.y

clean: 
	rm *.o clex.c cgram.tab.h c113c