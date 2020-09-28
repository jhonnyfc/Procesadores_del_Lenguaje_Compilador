all: dof comp
all2: dof comp2
all3: dof comp3

dof: scanner.l
	clear
	flex scanner.l

comp: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out

comp2: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out code

comp3: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out code2

del: lex.yy.c a.out
	clear
	rm lex.yy.c
	rm a.out