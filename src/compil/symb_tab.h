#ifndef __SYMB_TAB__
#define __SYMB_TAB__

#include <string.h>
#include <stdio.h>

typedef struct symb_tab {
    char* fun_name;
    char** table;
    int size_tab;
    int global;
}Symb_tab;

int add_symb(Symb_tab tab, char* symb);

#endif