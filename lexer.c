#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lexer.h"

static const char* keywords[MAX_KEYWORDS] = {
    "int", "float", "return", "if", "else", "while", "for", "do", "break", "continue",
    "char", "double", "void", "switch", "case", "default", "const", "static", "sizeof", "struct"
};

static const char* operators = "+-*/%=!<>|&";
static const char* specialCharacters = ",;{}()[]";

//to open the file
void initializeLexer(const char* filename)
{

}
//to get token
Token getNextToken()
{

}
//to categorize the token
void categorizeToken(Token* token)
{

}
//to check key word
int isKeyword(const char* str)
{

}
//to check operator
int isOperator(const char* str)
{

}
//to check spectialcharater
int isSpecialCharacter(char ch)
{

}
//to check constant
int isConstant(const char* str)
{

}
//to check identifer
int isIdentifier(const char* str)
{
    
}