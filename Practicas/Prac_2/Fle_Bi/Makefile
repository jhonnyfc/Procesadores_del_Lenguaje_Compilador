CC = gcc
COMBI = bison
COMFLE = flex

FLBI = -d -v
FLFLE = -i
FLC = -c
FLDBG = -D DEBUG_MOD

#modulos
DEPCU = tab_cua.h
DEPSY = tab_sim.h
DEPS = $(DEPCU) $(DEPSY) bool_tools.h
DEPF = $(DEPS) parser.tab.h

LIBS = -lfl -lm

all: doB doF compF compTC compTS compBO compB

debug: doB doF compFdbg compTC compTS compBO compBdbg

debugB: doB doF compF compTC compTS compBO compBdbg

debugF: doB doF compFdbg compTC compTS compBO compB 

doB: parser.y $(DEPS)
	$(COMBI) $(FLBI) parser.y

doF: scanner.l
	$(COMFLE) $(FLFLE) scanner.l

compF: lex.yy.c $(DEPSF)
	$(CC) $(FLC) lex.yy.c

compFdbg: lex.yy.c $(DEPSF)
	$(CC) $(FLC) $(FLDBG) lex.yy.c

compTC: tab_cua.c $(DEPCU)
	$(CC) $(FLC) tab_cua.c

compTS: tab_sim.c $(DEPSY)
	$(CC) $(FLC) tab_sim.c

compBO: bool_tools.c $(DEPSY) $(DEPCU)
	$(CC) $(FLC) bool_tools.c

compB: parser.tab.c lex.yy.o tab_cua.o tab_sim.o bool_tools.o $(DEPS)
	$(CC) parser.tab.c lex.yy.o tab_cua.o tab_sim.o bool_tools.o $(LIBS)

compBdbg: parser.tab.c lex.yy.o tab_cua.o tab_sim.o bool_tools.o $(DEPS)
	$(CC) $(FLDBG) parser.tab.c lex.yy.o tab_cua.o tab_sim.o bool_tools.o $(LIBS)

cl: parser.output
	clear
	rm parser.tab.c
	rm parser.output
	rm parser.tab.h
	rm lex.yy.c
	rm *.o
	rm a.out

p1: a.out
	./a.out code4

p2: a.out
	./a.out code

p3: a.out
	./a.out code2

p4: a.out
	./a.out code3

