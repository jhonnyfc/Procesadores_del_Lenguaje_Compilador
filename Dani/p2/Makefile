all: dof comp

dof: parser.y
	clear
	bison -v -d parser.y
	flex nombre.l
	gcc -c lex.yy.c
	gcc nombre.tab.c lex.yy.o -lfl -lm

comp: parser.tab.c
	gcc parser.tab.c -lfl -lm
	./a.out

del: a.out
	clear
	rm a.out
	rm parser.output
	rm parser.tab.c
	rm parser.tab.h

