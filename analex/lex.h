/*
* lex.h: Definitions of all the tokens in the language and the analizer
* author: gumball
*/

#define COLON 12    // :
#define COMMA 2     // ,
#define SEMI 3      // semicolon ;
#define LRB 4       // left round braket (
#define RRB 5       // right round bracket )
#define LSB 6       // left square bracket [
#define RSB 7       // left square bracket ]
#define LCB 8       // left curly bracket {
#define RCB 9       // right curly bracket }
#define HASH 10     // hashtag #
#define ASTERISK 11 // *
// #define NUM 13      // number - decimals and integers
// #define ID 14       // strings

extern int Line_number;
extern int Size;
extern char *Lexeme;

int lex();