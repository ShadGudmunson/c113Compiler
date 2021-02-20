c113c: clex.o main.o cgram.tab.o tree.o
	gcc -Wall -o c113c clex.o main.o cgram.tab.o tree.o

main.o: main.c
	gcc -ggdb3 -Wall -c main.c

clex.c: clex.l cgram.tab.h
	flex -o clex.c clex.l

clex.o: clex.c tree.h 
	gcc -ggdb3 -Wall -c clex.c

tree.o: tree.c tree.h ytab.h cgram.tab.h
	gcc -ggdb3 -Wall -c tree.c

cgram.tab.o: cgram.tab.c
	gcc -ggdb3 -Wall -c cgram.tab.c

cgram.tab.h cgram.tab.c: cgram.y tree.h
	bison -d cgram.y

clean: 
	rm *.o clex.c cgram.tab.h c113c