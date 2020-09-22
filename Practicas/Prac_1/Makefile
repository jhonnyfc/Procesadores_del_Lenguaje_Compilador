all: dof comp

dof: scanner.l
	clear
	flex scanner.l

comp: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out

del: lex.yy.c a.out
	clear
	rm lex.yy.c
	rm a.out