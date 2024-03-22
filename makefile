cppc: lex.o cppc.o
	gcc -o cppc cppc.o lex.o

cppc.o: cppc.c analex/lex.h
	gcc -c cppc.c

lex.o: analex/lex.c analex/lex.h
	gcc -c analex/lex.c

clean:
	rm *.o cppc