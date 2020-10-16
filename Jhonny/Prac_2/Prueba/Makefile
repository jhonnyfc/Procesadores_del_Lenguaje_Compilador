all: dof comp

dof: pra2.y
	clear
	bison -v -d pra2.y

comp: pra2.tab.c
	gcc pra2.tab.c -lfl -lm
	./a.out

del: a.out
	clear
	rm a.out
	rm pra2.output
	rm pra2.tab.c
	rm pra2.tab.h

