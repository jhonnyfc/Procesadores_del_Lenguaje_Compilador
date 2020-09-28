all: dof comp
all2: dof comp2

dof: scan_0.l
	clear
	flex scan_0.l

comp: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out

comp2: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out	code

del: lex.yy.c a.out
	clear
	rm a.out
	rm lex.yy.c