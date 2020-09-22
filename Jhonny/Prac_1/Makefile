all: dof comp

dof: scan_0.l
	clear
	flex scan_0.l

comp: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out

del: lex.yy.c a.out
	clear
	rm a.out
	rm lex.yy.c