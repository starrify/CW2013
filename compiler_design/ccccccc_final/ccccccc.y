%{
/* 
 * This is part of the coursework for Compiler Design, 2013.05_06 
 * by Pengyu CHEN (cpy.prefers.you[at]gmail.com)
 * COPYLEFT, ALL WRONGS RESERVED.
 */
 
//#include "ccccccc.yy.h"
#ifndef NULL
#define NULL ((void*)0)
#endif

%}

%union /* typedef of yylval */
{
    char *str;
    long num;
}

%token <str>
    KEYWORD_ELSE KEYWORD_IF KEYWORD_INT KEYWORD_RETURN KEYWORD_VOID KEYWORD_WHILE
    MISC_ID

    SYMBOL_ADD SYMBOL_SUB SYMBOL_MUL SYMBOL_DIV SYMBOL_LE SYMBOL_LEQ SYMBOL_GT
    SYMBOL_GEQ SYMBOL_EEQL SYMBOL_NEQ SYMBOL_EQL 
    SYMBOL_SEMICOLON SYMBOL_COMMA SYMBOL_PARENTHESIS_L SYMBOL_PARENTHESIS_R
    SYMBOL_SQUARE_L SYMBOL_SQUARE_R SYMBOL_BRACKET_L SYMBOL_BRACKET_R

%token <num>
    MISC_NUM

/*
%type <str>
    program
    declaration_list
    declaration
    var_declaration
    type_specifier
    fun_declaration
    params
    param_list
    param
    compound_stmt
    locla_declarations
    statement_list
    statement
    expression_stmt
    selection_stmt
    iteration_stmt
    return_stmt
    expression
    var
    simple_expression
    relop
    additive_expression
    addop
    term
    mulop
    factor
    call
    args
    arg_list
*/

%start all

%%

all: 
    ;
    
%%

