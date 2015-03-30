%{
#include "latino.h"
#include "structs.h"
#define YYERROR_VERBOSE 1
%}

%defines
%union {
    int fn; /* which function */
    char *b;
    char *c;
    double d;
    struct ast *a;
    struct symbol *s;   /* which symbol */
    struct symlist *sl;
    struct lat_string *str;
}

/* declare tokens */
%token <b> KEYWORD_TRUE KEYWORD_FALSE
%token <c> TOKEN_CHAR
%token <d> TOKEN_NUMBER
%token <str> TOKEN_STRING
%token <s> TOKEN_IDENTIFIER
%token <fn> TOKEN_FUNC
%token
    KEYWORD_IF
    KEYWORD_END
    KEYWORD_ELSE
    KEYWORD_WHILE
    KEYWORD_DO
    KEYWORD_WHEN
    KEYWORD_FUNCTION
    KEYWORD_TRUE
    KEYWORD_FALSE
    KEYWORD_FROM
    KEYWORD_TO
    KEYWORD_STEP
    KEYWORD_BOOL
    KEYWORD_INT
    KEYWORD_DECIMAL
    KEYWORD_CHAR
    KEYWORD_STRING


%nonassoc <fn> CMP
%type <a> exp stmt list explist var value
%type <sl> symlist

/*
 * presedencia de operadores
 * 0: -
 * 1: * /
 * 2: + -
 *
 */
%right '='
%left '+' '-'
%left '*' '/' '%'
%left UMINUS

%start program

%%

program: /* empty */
    | program stmt {
        //printf("= %4.4g\n> ", eval($2));
        eval($2);
        treefree($2);
    }
    | program KEYWORD_FUNCTION TOKEN_IDENTIFIER '(' symlist ')' list KEYWORD_END {
        dodef($3, $5, $7);
        //printf("Define %s\n> ", $3->name);
    }
    /* | error { yyerrok; printf("=> "); } */
    ;

stmt:
    KEYWORD_IF '(' exp ')' list KEYWORD_END {
        $$ = newflow(NODE_IF, $3, $5, NULL); }
    | KEYWORD_IF '(' exp ')' list KEYWORD_ELSE list KEYWORD_END {
        $$ = newflow(NODE_IF, $3, $5, $7); }
    | KEYWORD_WHILE '(' exp ')' list KEYWORD_END {
        $$ = newflow(NODE_WHILE, $3, $5, NULL); }
    | KEYWORD_DO list KEYWORD_WHEN '(' exp ')' {
        $$ = newflow(NODE_DO, $5, $2, NULL); }
    | var
    /*| exp { double  d = eval($1); printf("=> %lf\n", d); }*/
    ;

list:   /* empty */ { $$ = NULL; }
    | stmt list {
        if ($2 == NULL)
            $$ = $1;
        else
            $$ = newast(NODE_EXPRESION, $1, $2);
    }
    ;

    /*| CMP        { $$ = newcmp($1, NULL, NULL); }*/
exp: exp CMP exp { $$ = newcmp($2, $1, $3); }
    | exp '+' exp { $$ = newast(NODE_ADD, $1, $3); }
    | exp '-' exp { $$ = newast(NODE_SUB, $1, $3); }
    | exp '*' exp { $$ = newast(NODE_MULT, $1, $3); }
    | exp '/' exp { $$ = newast(NODE_DIV, $1, $3); }
    | '(' exp ')' { $$ = $2; }
    | '-' exp %prec UMINUS { $$ = newast(NODE_UNARY_MINUS, $2, NULL); }
    | value
    ;

var: TOKEN_IDENTIFIER '=' exp { $$ = newasgn($1, $3); }
    | TOKEN_IDENTIFIER '=' value { $$ = newasgn($1, $3); }
    | TOKEN_FUNC '(' explist ')' { $$ = newfunc($1, $3); }
    | TOKEN_IDENTIFIER '(' explist ')' { $$ = newcall($1, $3); }
    ;

value: TOKEN_NUMBER { $$ = newnum($1); }
    | TOKEN_IDENTIFIER { $$ = newref($1); }
    | KEYWORD_TRUE { $$ = newbool($1); }
    | KEYWORD_FALSE { $$ = newbool($1); }
    | TOKEN_CHAR { $$ = $<c>1; }
    | TOKEN_STRING { $$ = $<str>1; }
    ;

explist: /* empty */ { $$ = NULL; }
    | exp
    | exp ',' explist { $$ = newast(NODE_EXPRESION, $1, $3); }
    ;

symlist: /* empty */ { $$ = NULL; }
    | TOKEN_IDENTIFIER { $$ = newsymlist($1, NULL); }
    | TOKEN_IDENTIFIER ',' symlist { $$ = newsymlist($1, $3); }
    ;

%%

extern
void yyerror(char *s, ...)
{
    print_error("linea %i, %s", yylineno, s);
}
