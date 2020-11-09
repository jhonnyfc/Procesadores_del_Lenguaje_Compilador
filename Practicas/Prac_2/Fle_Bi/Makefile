all: dob dof compf compb

dob: parser.y
	clear
	bison -v -d parser.y

dof: scanner.l
	clear
	flex scanner.l

compf: dof lex.yy.c
	gcc -c lex.yy.c

compb: dof dob parser.tab.c lex.yy.o
	gcc parser.tab.c lex.yy.o -lfl -lm

del: parser.output
	clear
	rm lex.yy.c
	rm lex.yy.o
	rm parser.output
	rm parser.tab.c
	rm parser.tab.h
	rm a.out

