cppc: lex.o cppc.o
	gcc -g -o cppc cppc.o lex.o

cppc.o: cppc.c analex/lex.h
	gcc -g -c cppc.c

lex.o: analex/lex.c analex/lex.h
	gcc -g -c analex/lex.c

clean:
	rm *.o cppc