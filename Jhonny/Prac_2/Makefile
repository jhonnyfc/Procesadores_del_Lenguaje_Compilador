all: dof comp

dof: pra2.y
	clear
	bison -v -d pra2.y

comp: pra2.tab.c
	gcc pra2.tab.c -lfl -lm

del: lex.yy.c a.out
	clear
	rm a.out
	rm lex.yy.c

