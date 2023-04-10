#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "symb_tab.h"
#include "../tree.h"

void printError(const char* error, const char* name, const char* fun) {
  fprintf(stderr, "\033[1;31mERROR: %s (for %s) in %s\033[0m\n", error, name, fun);
}

int init_symb_tab(Symb_tab* tab, char* function_name) {
    tab->var_tab = calloc(INITIAL_TAB_SIZE, sizeof(Var));
    if (!tab->var_tab) {
        printf("Run out of memory\n");
        exit(1);
    }
    tab->fun_name = strdup(function_name);
    tab->max_size_tab = INITIAL_TAB_SIZE;
    tab->size_tab = 0;

    return 0;
}

/* add symb to tab */
static void add_symb(Symb_tab* tab, Node symb) {
    Var var_to_add;

    if (tab->size_tab == tab->max_size_tab) {
        tab->var_tab = realloc(tab->var_tab, tab->max_size_tab * 2);
        printf("\t realoced\n");
        if (!tab->var_tab) {
            printf("Run out of memory\n");
            exit(1);
        }
        tab->max_size_tab *= 2;
    }

    var_to_add.name = strdup(symb.name);
    var_to_add.type = strdup(symb.type);

    tab->var_tab[tab->size_tab] = var_to_add;
    tab->size_tab++;
}

/**
 * @brief add symbol in Symb tab
 * 
 * @param tab the symb tab where add the symb
 * @param symb the symb to add
 * @return int 0 -> already in tab, 1 -> add in tab
 */
int check_add_symb(Symb_tab* tab, Node symb, int add) {
    int i;

    /* check if symbol alredy exist */
    for (i = 0; i < tab->size_tab; i++)
        if(!strcmp(tab->var_tab[i].name, symb.name))
            return 1;
    if (add)
        add_symb(tab, symb);
    return 0;
}


/**
 * @brief s'occupe de la symb_tab local a une fonction
 * 
 * @param node 
 * @param symb_tab 
 */
int read_fuction(Node* node, Symb_tab *symb_tab) {
    if(!node)
        return 0;

    switch (node->label) {
    case _BODY:
    case _PARAM:
            read_fuction(node->firstChild, symb_tab);
        break;
    case _DECL_VAR:
        if (check_add_symb(symb_tab, *node, 1)){
            printError("variable redefinition", node->name, symb_tab->fun_name);
            return 1;
        }
    default:
        break;
    }
    return read_fuction(node->nextSibling, symb_tab);

}

/**
 * @brief s'occupe de la global symb_tab, cad fonction et global var
 * 
 * @param tree 
 * @param prog_symb_tab 
 */
int read_prog(Node* tree, Prog_symb_tab* prog_symb_tab) {
    if(!tree) /* plus de fonction (fin du prog) */
        return 0;

    switch (tree->label) {
    case _PROG:
        init_symb_tab(&prog_symb_tab->global_tab, "GLOBAL");
        read_prog(tree->firstChild, prog_symb_tab);
        break;
    case _DECL_VAR:
        if (check_add_symb(&prog_symb_tab->global_tab, *tree, 1)) {
            printError("global redefinition", tree->name, "global namespace");
            return 1;
        }
        break;
    case _DECL_FUN:
        if (check_add_symb(&prog_symb_tab->global_tab, *tree, 1)) {
            printError("global redefinition", tree->name, "global namespace");
            return 1;
        }
        init_symb_tab(&prog_symb_tab->symb_tab[prog_symb_tab->size_tab], tree->name);
        if (read_fuction(tree->firstChild, &prog_symb_tab->symb_tab[prog_symb_tab->size_tab])) {
            return 1;
        }
        prog_symb_tab->size_tab++;
        break;
    default:
        break;
    }
    read_prog(tree->nextSibling, prog_symb_tab);
}

char* get_type(Node* tree, Prog_symb_tab* prog_symb_tab, int tab_num) {
    int i;
    char* type;

    switch (tree->label) {
    case _CONST:
        return "int";
        break;
    case _CONST_CHAR:
        return "char";
        break;

    case _VAR:
        for (i = 0; i < prog_symb_tab->symb_tab[tab_num].size_tab; i++) {
            if (!strcmp(tree->name, prog_symb_tab->symb_tab[tab_num].var_tab[i].name))
                return  prog_symb_tab->symb_tab[tab_num].var_tab[i].type;
        }
        printf("LES PROBLEMES, la variable n'existe pas");
        break;

    case _FUN:
        for (i = 0; i < prog_symb_tab->global_tab.size_tab; i++) {
            if (strcmp(tree->name, prog_symb_tab->global_tab.var_tab[i].name))
                type = prog_symb_tab->global_tab.var_tab[i].name;
        }
        break;

    return type;
    default:
        break;
    }
}

int check_semantique_fun(Node* tree, Prog_symb_tab* prog_symb_tab, int tab_num) {
    Node* child; 
    Symb_tab* fun_tab = NULL;
    int i;

    if (!tree)
        return 0;

    switch (tree->label) {
    case _BODY:
        return check_semantique_fun(tree->firstChild, prog_symb_tab, tab_num);
    case _FUN:
        for (i = 0; i < 20; i++){
            if (!strcmp(prog_symb_tab->symb_tab[i].fun_name, tree->name))
                fun_tab = &prog_symb_tab->symb_tab[i];
        }
        if (!fun_tab)
            printf("La fonction existe pas lol\n");
        
        for (child = tree->firstChild, i=0; child; child = child->nextSibling, i++) {
            if (fun_tab->var_tab[i].param) {
                if (!strcmp(get_type(child, prog_symb_tab, tab_num), fun_tab->var_tab[i].type))
                    continue;
                printf("arg pas de bon type\n");
            }else
                printf("too few arg\n");
        }
        break;
        
    case _ASSIGN:
        if (strcmp(get_type(tree->firstChild, prog_symb_tab, tab_num), get_type(tree->firstChild->nextSibling, prog_symb_tab, tab_num)))
            printf("assignation incorect\n");
        break;
    
    default:
        break;
    }

    return check_semantique_fun(tree->nextSibling, prog_symb_tab, tab_num);
}

int check_semantique(Node* tree, Prog_symb_tab* prog_symb_tab) {
    int i, fun_tab;
    
    if (!tree)
        return 0;
    
    for (Node* n = tree; n!=NULL; n = n->nextSibling) {
        if(n->label == _DECL_FUN) {
            for (i = 0; i < 20; i++){
                if (!strcmp(prog_symb_tab->symb_tab[i].fun_name, tree->name)){
                    fun_tab = i;
                    break;
                }
            }

            check_semantique_fun(n->firstChild, prog_symb_tab, fun_tab);
        }
    }
    return 0;
}
