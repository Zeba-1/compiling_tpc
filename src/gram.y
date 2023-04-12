%{
  #include <stdio.h>
  #include <string.h>
  #include "tree.h"
  int yyerror(char * msg);
  int yylex();
  extern int lineno;
  extern int charno;

  extern Node* Tree;
  extern FILE* yyin;
%}

%token VOID IF ELSE WHILE RETURN

%union {
  Node* node;
  char* name;
  int const_val;
}
%type <node> DeclGlobalVars GlobalDeclarateurs Declarateurs DeclFoncts DeclFonct EnTeteFonct Parametres ListTypVar Corps DeclVars SuiteInstr Instr Exp TB FB M E T F LValue Arguments ListExp
%token <name> IDENT TYPE AND EQ OR ORDER 
%token <const_val> CHARACTER NUM ADDSUB DIVSTAR

%right ELSE /* make sure groupe ELSE at rigth */

%%
Prog:  DeclGlobalVars DeclFoncts                {
                                                    Tree = makeNode(_PROG);
                                                    addChild(Tree, $1);
                                                    addChild(Tree, $2);
                                                }
    ;
DeclGlobalVars: 
       DeclGlobalVars TYPE GlobalDeclarateurs ';'   {
                                                        $$ = $3;
                                                        Node* t = $3;
                                                        while(t != NULL) {
                                                            t->type = strdup($2);
                                                            t = t->nextSibling;
                                                        }
                                                        addSibling($$, $1);
                                                    }
    |                                           { $$=NULL;}
    ;
GlobalDeclarateurs:
       GlobalDeclarateurs ',' IDENT             {
                                                    $$ = $1;
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup($3);
                                                    addSibling($$, t);
                                                }
    |  IDENT                                    {
                                                    $$ = makeNode(_DECL_VAR);
                                                    $$->name = strdup($1);
                                                }
    ;   
DeclFoncts:
       DeclFoncts DeclFonct                     {
                                                    $$ = $1; addSibling($$, $2);
                                                }
    |  DeclFonct                                {
                                                    $$ = $1;
                                                }
    ;
DeclFonct:
       EnTeteFonct Corps                        {
                                                    $$ = $1;
                                                    addChild($$, $2);
                                                }
    ;
EnTeteFonct:
       TYPE IDENT '(' Parametres ')'            {
                                                    $$ = makeNode(_DECL_FUN);
                                                    $$->name = strdup($2);
                                                    $$->type = strdup($1);
                                                    $$->fun = 1;
                                                    addChild($$, $4);
                                                }
    |  VOID IDENT '(' Parametres ')'            {
                                                    $$ = makeNode(_DECL_FUN);
                                                    $$->name = strdup($2);
                                                    addChild($$, $4);
                                                }
    ;
Parametres:
       VOID                                     {
                                                    $$ = NULL;
                                                }
    |  ListTypVar                               {
                                                    $$ = makeNode(_PARAM);
                                                    addChild($$, $1);
                                                }
    ;
ListTypVar:
       ListTypVar ',' TYPE IDENT                {
                                                    $$ = makeNode(_DECL_VAR);
                                                    $$->name = strdup($4);
                                                    $$->type = strdup($3);
                                                    $$->param = 1;
                                                    addSibling($$, $1);
                                                }
    |  TYPE IDENT                               {
                                                    $$ = makeNode(_DECL_VAR);
                                                    $$->name = strdup($2);
                                                    $$->type = strdup($1);
                                                    $$->param = 1;
                                                }
    ;
Corps: '{' DeclVars SuiteInstr '}'              {
                                                    $$=makeNode(_BODY);
                                                    addChild($$, $2); addChild($$, $3);
                                                }
    ;
DeclVars:
        DeclVars TYPE Declarateurs ';'          {
                                                    if ($1 != NULL) {
                                                        $$ = $1;
                                                        addSibling($$, $3);
                                                    }else
                                                        $$ = $3;
                                                    Node* t = $3;
                                                    while(t != NULL) {
                                                        if (t->label == _ASSIGN) {
                                                            t->firstChild->type = strdup($2);
                                                        }else
                                                            t->type = strdup($2);
                                                        t = t->nextSibling;
                                                    }
                                                }
    |                                           {$$=NULL;}
    ;
Declarateurs:
        Declarateurs ',' IDENT                  {
                                                    $$ = $1;
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup($3);
                                                    addSibling($$, t);
                                                }
    |   Declarateurs ',' IDENT '=' Exp          {
                                                    $$ = $1;
                                                    Node* a = makeNode(_ASSIGN);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    addChild(a, t);
                                                    addChild(a, $5);
                                                    t->name = strdup($3);
                                                    addSibling($$, a);
                                                }
    |   IDENT '=' Exp                           {
                                                    $$ = makeNode(_ASSIGN);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup($1);
                                                    addChild($$, t);
                                                    addChild($$, $3);
                                                }
    |   IDENT                                   {
                                                    $$ = makeNode(_DECL_VAR);
                                                    $$->name = strdup($1);
                                                }
    ;
SuiteInstr:
       SuiteInstr Instr                         {
                                                    if($$ == NULL) {
                                                        $$=$2;
                                                    } else {
                                                        $$ = $1;
                                                        addSibling($$, $2);
                                                    }
                                                }
    |                                           { $$=NULL; }
    ;
Instr:
       LValue '=' Exp ';'                       {
                                                    $$ = makeNode(_ASSIGN);
                                                    addChild($$, $1);
                                                    addChild($$, $3);
                                                }
    |  IF '(' Exp ')' Instr                     {
                                                    $$ = makeNode(_IF);
                                                    addChild($$, $3);
                                                    addChild($$, $5);
                                                }
    |  IF '(' Exp ')' Instr ELSE Instr          {
                                                    $$ = makeNode(_IF);
                                                    addChild($$, $3);
                                                    addChild($$, $5);
                                                    addChild($$, $7);
                                                }
    |  WHILE '(' Exp ')' Instr                  {
                                                    $$ = makeNode(_WHILE);
                                                    addChild($$, $3);
                                                    addChild($$, $5);
                                                }
    |  IDENT '(' Arguments  ')' ';'             {
                                                    $$ = makeNode(_FUN);
                                                    $$->name = strdup($1);
                                                    addChild($$, $3);
                                                }
    |  RETURN Exp ';'                           {
                                                    $$ = makeNode(_RETURN);
                                                    addChild($$, $2);
                                                }
    |  RETURN ';'                               {
                                                    $$ = makeNode(_RETURN);
                                                }
    |  '{' SuiteInstr '}'                       {
                                                    $$ = $2;
                                                }
    |  ';'                                      {$$=NULL;}
    ;
Exp :  Exp OR TB                                {
                                                    $$ = makeNode(_COMP);
                                                    $$->name = strdup($2);
                                                    addChild($$, $1);
                                                    addChild($$, $3);
                                                }
    |  TB                                       {$$=$1;}
    ;
TB  :  TB AND FB                                {
                                                    $$ = makeNode(_COMP);
                                                    $$->name = strdup($2);
                                                    addChild($$, $1);
                                                    addChild($$, $3);
                                                }
    |  FB                                       {$$=$1;}
    ;
FB  :  FB EQ M                                  {
                                                    $$ = makeNode(_COMP);
                                                    $$->name = strdup($2);
                                                    addChild($$, $1);
                                                    addChild($$, $3);
                                                }
    |  M                                        {$$=$1;}
    ;
M   :  M ORDER E                                {
                                                    $$ = makeNode(_COMP);
                                                    $$->name = strdup($2);
                                                    addChild($$, $1);
                                                    addChild($$, $3);
                                                }
    |  E                                        {$$=$1;}
    ;
E   :  E ADDSUB T                               {
                                                    $$ = makeNode(_BIN_OP);
                                                    $$->const_val = $2;
                                                    addChild($$, $1);
                                                    addChild($$, $3);
                                                }
    |  T                                        {$$=$1;}
    ;    
T   :  T DIVSTAR F                              {
                                                    $$ = makeNode(_BIN_OP);
                                                    $$->const_val = $2;
                                                    addChild($$, $1);
                                                    addChild($$, $3);
                                                }
    |  F                                        {$$=$1;}
    ;
F   :  ADDSUB F                                 {
                                                    // NEED TO BE FIX
                                                    $$ = makeNode(_BIN_OP);
                                                    $$->const_val = $1;
                                                    addChild($$, $2);
                                                }
    |  '!' F                                    {
                                                    $$ = makeNode(_NON);
                                                    addChild($$, $2);
                                                }
    |  '(' Exp ')'                              {$$=$2;}
    |  NUM                                      {
                                                    $$ = makeNode(_CONST);
                                                    $$->const_val = $1;
                                                }
    |  CHARACTER                                {
                                                    $$ = makeNode(_CONST_CHAR);
                                                    $$->const_val = $1;
                                                }
    |  LValue                                   {$$ = $1;}
    |  IDENT '(' Arguments  ')'                 {
                                                    $$ = makeNode(_FUN);
                                                    $$->name = strdup($1);
                                                    addChild($$, $3);
                                                }
    ;
LValue:
       IDENT                                    {
                                                    $$ = makeNode(_VAR);
                                                    $$->name = strdup($1);
                                                }
    ;
Arguments:
       ListExp                                  {$$=$1;}
    |                                           {$$ = NULL;}
    ;
ListExp:
       ListExp ',' Exp                          {
                                                    $$=$1;
                                                    addSibling($$, $3);
                                                }
    |  Exp                                      {$$=$1;}
    ;
%%

int yyerror(char * msg) {
    printf("%s at line %d (after char %d)\n", msg, lineno, charno);
    return 0;
}