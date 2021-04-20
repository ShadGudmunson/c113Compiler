CFLAGS = -Wall -g -c

c113c: clex.o main.o cgram.tab.o tree.o symtab.o type.o
	gcc -Wall -o c113c clex.o main.o cgram.tab.o tree.o symtab.o type.o

main.o: main.c tree.h symtab.h
	gcc $(CFLAGS) main.c

clex.o: clex.c tree.h 
	gcc $(CFLAGS) clex.c

tree.o: tree.c tree.h ytab.h cgram.tab.h symtab.h type.h type.o
	gcc $(CFLAGS) tree.c

cgram.tab.o: cgram.tab.c
	gcc $(CFLAGS) cgram.tab.c

symtab.o: symtab.c symtab.h type.h
	gcc $(CFLAGS) symtab.c

type.o: type.c type.h symtab.h prodrule.h cgram.tab.h ytab.h
	gcc $(CFLAGS) type.c

clex.c: clex.l cgram.tab.h
	flex -o clex.c clex.l

cgram.tab.h cgram.tab.c: cgram.y tree.h symtab.h
	bison -v -d cgram.y

clean: 
	rm *.o clex.c cgram.tab.h c113c cgram.output cgram.tab.c *.png