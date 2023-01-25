%{
#include <stdio.h>
#include <string.h>
#include "tree.h"
#include "gram.tab.h"
int yylex();
int lineno = 1;
int charno = 0;
%}

%option noyywrap
%x COMMENT

%%
void {charno+=4; return VOID;}
if {charno+=2; return IF;}
else {charno+=4; return ELSE;}
while {charno+=5; return WHILE;}
return {charno+=6; return RETURN;}
int|char {yylval.name = strdup(yytext); charno+=strlen(yytext);
          return TYPE;
         }

[+-] {yylval.const_val = yytext[0]; charno+=strlen(yytext); return ADDSUB;}
[*/%] {yylval.const_val = yytext[0]; charno+=strlen(yytext); return DIVSTAR;}
[<>][=]? {yylval.name = strdup(yytext); charno+=strlen(yytext); return ORDER;}
[!=][=] {yylval.name = strdup(yytext); charno+=strlen(yytext); return EQ;}
&& {yylval.name = strdup(yytext); charno+=strlen(yytext); return AND;}
\|\| {yylval.name = strdup(yytext); charno+=strlen(yytext); return OR;}


[_a-zA-Z][_a-zA-Z0-9]* {yylval.name = strdup(yytext); charno+=strlen(yytext);
                        return IDENT;
                       }

0|[1-9][0-9]* {yylval.const_val = atoi(yytext); charno+=strlen(yytext);
               return NUM;
              }
\'.\'|\'\\n\' {yylval.const_val = yytext[1]; charno+=strlen(yytext);
               return CHARACTER;
              }

[(){},=;!] {charno++; return yytext[0];}

\/\/.* ; /* // comment */
\/\* { BEGIN COMMENT; }
<COMMENT>\*\/ { BEGIN INITIAL; }
<COMMENT>. ;
<COMMENT>\n {lineno++;}

<<EOF>> {return 0;}
[ \t] {}
\n {lineno++; charno=0;}
. {return 1;}
%%