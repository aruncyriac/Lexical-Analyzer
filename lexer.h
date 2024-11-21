#ifndef LEXER_H
#define LEXER_H

#define MAX_KEYWORDS 20
#define MAX_TOKEN_SIZE 100

//to know the token
typedef enum {
    KEYWORD,
    OPERATOR,
    SPECIAL_CHARACTER,
    CONSTANT,
    IDENTIFIER,
    UNKNOWN
} TokenType;

//to store token
typedef struct {
    char lexeme[MAX_TOKEN_SIZE];
    TokenType type;
} Token;
//to open the file
void initializeLexer(const char* filename);
//to get token
Token getNextToken();
//to categorize the token
void categorizeToken(Token* token);
//to check key word
int isKeyword(const char* str);
//to check operator
int isOperator(const char* str);
//to check spectialcharater
int isSpecialCharacter(char ch);
//to check constant
int isConstant(const char* str);
//to check identifer
int isIdentifier(const char* str);

#endif
