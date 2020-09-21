all: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl
	./a.out

flex: eje_1.l
	flex eje_1.l

gcc: lex.yy.c
	gcc lex.yy.c -lfl
	./a.out
