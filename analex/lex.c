/*
* lex.c: Definitions of all the tokens in the language
* author: gumball
*/

#include "lex.h"
#include <stdio.h>
#include <ctype.h>

int Line_number = 0;    // line in the file
int Lenght = 0;    // size of the lexeme
char *Lexeme = ""; // the read word

int lex(){
    char *current;          // current character being read
    static char buffer[128];

    current = Lexeme + Lenght;

    if(!*current){
        current = buffer;
        if(!fgets(buffer, sizeof(buffer), stdin)){
            *current = '\0';
            return EOI;
        }
    }

    //automata
    for(; *current ; ++current){
        Lexeme = current;
        Lenght = 1;

        switch (*current){
            case EOF: return EOI;
            case ';': return SEMI;
            case ':': return COLON;
            case ',': return COMA;
            case '.': return DOT;
            case '#': return HASH;
            case '(': return LRB;
            case ')': return RRB;
            case '{': return LCB;
            case '}': return RCB;
            case '[': return LSB;
            case ']': return RSB;
            case '*': return TIMES;
            case '+': return PLUS;
            case '-': return MINUS;
            case '/': return DIV;
            case '%': return MODULUS;

            //ignore white space
            case '\n':
            case '\t':
            case ' ': break;

            default:
                fprintf(stderr, "Ignoring invalid character <%c>\n", *current);
        }
    }
}