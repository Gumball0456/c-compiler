lex.o: analex/lex.c analex/lex.h
	gcc -g -c analex/lex.c

clean:
	rm *.o cppc