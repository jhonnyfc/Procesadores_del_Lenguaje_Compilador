all: dof comp

dof: parser.y
	clear
	bison -v -d parser.y

comp: parser.tab.c
	gcc parser.tab.c -lfl -lm
	./a.out

del: parser.output
	clear
	rm parser.output
	rm parser.tab.c
	rm parser.tab.h
	rm a.out
