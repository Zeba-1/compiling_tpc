#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "tree.h"
#include "gram.tab.h"
#include "compil/symb_tab.h"

/* global variable */
Node* Tree;

/* extern variable */
extern FILE* yyin;

/* extern function */
int yyparse(void);

/* function */

int main(int argc, char const *argv[]) {
    int i;
    int help = 0;
    int tree = 0;
    int stdinRedifined = 0;

    Prog_symb_tab prog_symb_tab;
    prog_symb_tab.size_tab = 0;

    // Lecture des arguments
    for (i=1; i<argc; i++) {
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
            help = 1;
        else if(strcmp(argv[i], "-t") == 0 || strcmp(argv[i], "--tree") == 0)
            tree = 1;
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
        printf("--- COMMAND ---\n");
        printf("-t > print execution tree\n");
        printf("-h > print help tab\n");
        printf("-- USE FILES --\n");
        printf("./tpcas [-OPTION] < [FILE]\n");
        return 0;
    }

    int code = yyparse();

    /* outuput */
    if(tree) {
        printTree(Tree);
    }

    /* traduction */
    read_prog(Tree, &prog_symb_tab);
    printf("%s: %s\n", prog_symb_tab.symb_tab[1].var_tab[0].name, prog_symb_tab.global_tab.var_tab[0].type);

    free(Tree);
    return code;
}
