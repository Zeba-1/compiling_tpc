#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "tree.h"
#include "gram.tab.h"
#include "compil/symb_tab.h"
#include "compil/semantic.h"
#include "compil/trad.h"

/* global variable */
Node* Tree;

/* extern variable */
extern FILE* yyin;

/* extern function */
int yyparse(void);

/* function */
void print_help() {
    printf("--- COMMAND ---\n");
    printf("-t > print execution tree\n");
    printf("-h > print help tab\n");
    printf("-- USE FILES --\n");
    printf("./tpcas [-OPTION] < [FILE]\n");
}

void printSymbTab(Prog_symb_tab prog_tab) {
    int i, j;
    
    printf("GLOBAL SYMB TAB:\n");
    /* global tab */
    for (i = 0; i < prog_tab.global_tab.size_tab; i++) {
        printf("- (%s) %s : ", prog_tab.global_tab.var_tab[i].type, prog_tab.global_tab.var_tab[i].name);
        if (prog_tab.global_tab.var_tab[i].fun)
            printf("function\n");
        else if (prog_tab.global_tab.var_tab[i].param)
            printf("parameters\n");
        else
            printf("global variable\n");
    }
    printf("\n");

    /* each function tab */
    for (i = 0; i < prog_tab.size_tab; i++) {
        printf("%s SYMB TAB:\n", prog_tab.symb_tab[i].fun_name);
        for (j = 0; j < prog_tab.symb_tab[i].size_tab; j++) {
            printf("- (%s) %s : ", prog_tab.symb_tab[i].var_tab[j].type, prog_tab.symb_tab[i].var_tab[j].name);
            if (prog_tab.symb_tab[i].var_tab[j].fun)
                printf("function\n");
            else if (prog_tab.symb_tab[i].var_tab[j].param)
                printf("parameters\n");
            else
                printf("variable\n");
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]) {
    int i;
    int help = 0;
    int tree = 0;
    int symbtabs = 0;
    int stdinRedifined = 0;

    Prog_symb_tab prog_symb_tab;
    prog_symb_tab.size_tab = 0;

    // Lecture des arguments
    for (i=1; i<argc; i++) {
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
            help = 1;
        else if(strcmp(argv[i], "-t") == 0 || strcmp(argv[i], "--tree") == 0)
            tree = 1;
        else if(strcmp(argv[i], "-s") == 0 || strcmp(argv[i], "--symtabs") == 0)
            symbtabs = 1;
        else {
            // We redifine stdin with the first name we meet
            if (!stdinRedifined) {
                yyin = fopen(argv[i], "r");
                stdinRedifined = 1;
                if (!yyin) {
                    printf("invalid file name: %s\n", argv[i]);
                    return 2;
                }
                break;
            }
            printf("invalid arg: %s\n", argv[i]);
            return 2;
        }
    }

    // help
    if(help) {
        print_help();
        return 0;
    }

    if (yyparse())
        return 1;

    /* outuput */
    if(tree) {
        printTree(Tree);
    }

    /*** PARTIE COMPILATION ***/

    /* simbtab & sementic */
    if (read_prog(Tree, &prog_symb_tab))
        return 2;
    if (check_semantique(Tree->firstChild, &prog_symb_tab))
        return 2;

    if (symbtabs) {
        printSymbTab(prog_symb_tab);
    }

    /* traduction */
    trad_nasm(Tree, prog_symb_tab, "FILE.asm");

    free(Tree);
    return 0;
}
