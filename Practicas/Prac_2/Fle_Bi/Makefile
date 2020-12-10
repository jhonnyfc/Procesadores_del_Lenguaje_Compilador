CC = gcc
COMBI = bison
COMFLE = flex

FLBI = -d -v
FLFLE = -i
FLC = -c

DEPCU = tab_cua.h
DEPSY = tab_sim.h
DEPS = $(DEPCU) $(DEPSY)
DEPF = $(DEPS) parser.tab.h

LIBS = -lfl -lm

all: doB doF compF compTC compTS compB

doB: parser.y $(DEPS)
	$(COMBI) $(FLBI) parser.y

doF: scanner.l
	$(COMFLE) $(FLFLE) scanner.l

compF: lex.yy.c $(DEPSF)
	$(CC) $(FLC) lex.yy.c

compTC: tab_cua.c $(DEPCU)
	$(CC) $(FLC) tab_cua.c

compTS: tab_sim.c $(DEPSY)
	$(CC) $(FLC) tab_sim.c

compB: parser.tab.c lex.yy.o tab_cua.o tab_sim.o $(DEPS)
	$(CC) parser.tab.c lex.yy.o tab_cua.o tab_sim.o $(LIBS)

cl: parser.output
	clear
	rm parser.tab.c
	rm parser.output
	rm parser.tab.h
	rm lex.yy.c
	rm *.o
	rm a.out

play1: a.out
	./a.out code

play2:
	./a.out code2

play3:
	./a.out code3
