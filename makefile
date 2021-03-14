CFLAGS = -Wall -ggdb3 -c

c113c: clex.o main.o cgram.tab.o tree.o symtab.o
	gcc -Wall -o c113c clex.o main.o cgram.tab.o tree.o symtab.o

main.o: main.c tree.h
	gcc $(CFLAGS) main.c

clex.c: clex.l cgram.tab.h
	flex -o clex.c clex.l

clex.o: clex.c tree.h 
	gcc $(CFLAGS) clex.c

tree.o: tree.c tree.h ytab.h cgram.tab.h symtab.h
	gcc $(CFLAGS) tree.c

cgram.tab.o: cgram.tab.c
	gcc $(CFLAGS) cgram.tab.c

symtab.o: symtab.c
	gcc $(CFLAGS) symtab.c

cgram.tab.h cgram.tab.c: cgram.y tree.h
	bison -v -d cgram.y

clean: 
	rm *.o clex.c cgram.tab.h c113c cgram.output cgram.tab.c