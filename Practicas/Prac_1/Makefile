all: dof comp
all2: dof comp2

dof: scanner.l
	clear
	flex scanner.l

comp: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out

comp2: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out code

del: lex.yy.c a.out
	clear
	rm lex.yy.c
	rm a.out