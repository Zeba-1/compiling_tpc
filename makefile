CC=gcc
CFLAG=-Wall
# Flex/Bison Flag
FFLAG=
BFLAG=-d
EXO=tpcas

bin/$(EXO): obj/gram.tab.o obj/lex.yy.o obj/tree.o
	gcc obj/gram.tab.o obj/lex.yy.o obj/tree.o -o bin/$(EXO) $(CFLAG)
	bash test_script.sh $(EXO)

obj/lex.yy.o: src/parseur.lex
	flex -o src/lex.yy.c src/parseur.lex $(FFLAG)
	gcc src/lex.yy.c -c -o obj/lex.yy.o $(CFLAG)

obj/gram.tab.o: src/gram.y
	bison src/gram.y -o src/gram.tab.c $(BFLAG)
	gcc src/gram.tab.c -c -o obj/gram.tab.o $(CFLAG)

obj/tree.o: src/tree.c src/tree.h
	gcc src/tree.c -c -o obj/tree.o $(CFLAG)

clean:
	rm obj/*.o
	rm bin/$(EXO)