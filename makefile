c113c: clex.o main.o cgram.tab.o
	gcc -Wall -o c113c clex.o main.o cgram.tab.o

main.o: main.c
	gcc -ggdb3 -Wall -c main.c

clex.c: clex.l cgram.tab.h
	flex -o clex.c clex.l

clex.o: clex.c tree.h
	gcc -ggdb3 -Wall -c clex.c

cgram.tab.o: cgram.tab.c
	gcc -ggdb3 -Wall -c cgram.tab.c

cgram.tab.h cgram.tab.c: cgram.y tree.h
	bison -d cgram.y

clean: 
	rm *.o clex.c cgram.tab.h c113c