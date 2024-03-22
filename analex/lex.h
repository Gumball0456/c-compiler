/*
* lex.h: Definitions of all the tokens in the language and the analizer
* author: gumball
*/

#define EOI 0       // end of input
#define COLON 2     // :
#define DOT 3       // ,
#define COMA 4      // ,
#define SEMI 5      // semicolon ;
#define LRB 6       // left round braket (
#define RRB 7       // right round bracket )
#define LSB 8       // left square bracket [
#define RSB 9       // left square bracket ]
#define LCB 10      // left curly bracket {
#define RCB 11      // right curly bracket }
#define HASH 12     // hashtag #
#define TIMES 13    // *
#define PLUS 14     // +
#define MINUS 15    // -
#define MODULUS 16  // %
#define DIV 17      // /
#define NUM 18      // number - decimals and integers
#define ID 19       // strings

extern int Line_number;
extern int Lenght;
extern char *Lexeme;

int lex();