#ifndef __SYMB__
#define __SYMB__

#define INITIAL_TAB_SIZE 20

#include "../tree.h"

typedef struct var {
    int param;
    int fun;
    char* name;
    char* type;
}Var;

typedef struct {
    char* fun_name;
    int max_size_tab;
    int size_tab;
    Var* var_tab;
}Symb_tab;

typedef struct {
    Symb_tab global_tab;
    Symb_tab symb_tab[20];
    int size_tab;
}Prog_symb_tab;

int check_add_symb(Symb_tab* tab, Node symb, int add);
int read_prog(Node* tree, Prog_symb_tab* prog_symb_tab);

void printError(const char* error, const char* name, const char* fun);
void printWarn(const char* error, const char* name, const char* fun);

#endif