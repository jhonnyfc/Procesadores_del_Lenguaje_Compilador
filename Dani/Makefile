all: scanner.l
	clear
	flex scanner.l
	gcc lex.yy.c -lfl
	./a.out

flex: eje_1.l
	clear
	flex eje_1.l

gcc: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out

del:
	clear 
	rm a.out
	rm lex.yy.c