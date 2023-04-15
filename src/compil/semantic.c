#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "symb_tab.h"
#include "semantic.h"
#include "../tree.h"

/* declaration for recursive function */
static int check_semantique_fun(Node* tree, Prog_symb_tab* prog_symb_tab, int tab_num, int next);
static int get_type(Node* tree, Prog_symb_tab* prog_symb_tab, int tab_num, char** type_adr);

static int check_param(Node* tree, Prog_symb_tab* prog_symb_tab, int caller_num, int called_num) {
    Var param_list[50], *var_tab;
    Node* child;
    int i, nb_param = 0;
    char* t1;

    /* find the function in  */

    var_tab = prog_symb_tab->symb_tab[called_num].var_tab;
    /* build param list */
    for (i = 0; i < prog_symb_tab->symb_tab[called_num].size_tab; i++) {
        if (var_tab[i].param) {
            param_list[nb_param++] = var_tab[i];
        }else
            break; /* there is no more param */
    }

    
    /* check if arg match */
    child = tree->firstChild;
    while (child) {
        if (nb_param < 1) {
            printError("Too many args", tree->name, prog_symb_tab->symb_tab[caller_num].fun_name);
            return 2;
        }

        /* check type warnig */
        get_type(child, prog_symb_tab, caller_num, &t1);
        if (strcmp(t1, param_list[--nb_param].type))
            printWarn("type not match", tree->name, prog_symb_tab->symb_tab[caller_num].fun_name);

        child = child->nextSibling;
    }
    
    if (nb_param) {
        printError("Not enough args", tree->name, prog_symb_tab->symb_tab[caller_num].fun_name);
        return 2;
    }
    return 0;
}

static int get_type(Node* tree, Prog_symb_tab* prog_symb_tab, int tab_num, char** type_adr) {
    int i;
    if (check_semantique_fun(tree, prog_symb_tab, tab_num, 0))
        return 2;

    switch (tree->label) {
    case _BIN_OP:
        *type_adr = "int";
        return 0;
        break;
    case _CONST:
        *type_adr = "int";
        return 0;
        break;
    case _CONST_CHAR:
        *type_adr = "char";
        return 0;
        break;

    case _DECL_VAR:
    case _VAR:
        /* local check */
        for (i = 0; i < prog_symb_tab->symb_tab[tab_num].size_tab; i++) {
            if (!strcmp(tree->name, prog_symb_tab->symb_tab[tab_num].var_tab[i].name)){
                *type_adr = prog_symb_tab->symb_tab[tab_num].var_tab[i].type;
                return 0;
            }
        }
        /* global check */
        for (i = 0; i < prog_symb_tab->global_tab.size_tab; i++) {
            if (!strcmp(tree->name, prog_symb_tab->global_tab.var_tab[i].name)){
                if (prog_symb_tab->global_tab.var_tab[i].fun){
                    printError("Using function as variable", tree->name, prog_symb_tab->symb_tab[tab_num].fun_name);
                    return 2;
                }
                *type_adr = prog_symb_tab->global_tab.var_tab[i].type;
                return 0;
            }
        }
        printError("Varible undifined", tree->name, prog_symb_tab->symb_tab[tab_num].fun_name);
        return 2;
        break;

    case _FUN:
        for (i = 0; i < prog_symb_tab->global_tab.size_tab; i++) {
            if (!strcmp(tree->name, prog_symb_tab->global_tab.var_tab[i].name)){
                *type_adr = prog_symb_tab->global_tab.var_tab[i].type;
                return 0;
            }
        }
        break;

    default:
        break;
    }
    return 2;
}

static int check_semantique_fun(Node* tree, Prog_symb_tab* prog_symb_tab, int tab_num, int next_Sibling) { 
    Symb_tab* fun_tab = NULL;
    int i;
    char *t1, *t2;

    if (!tree)
        return 0;

    switch (tree->label) {
    case _BODY:
        return check_semantique_fun(tree->firstChild, prog_symb_tab, tab_num, 1);
        break;
    case _BIN_OP:
        if (get_type(tree->firstChild, prog_symb_tab, tab_num, &t1) || get_type(tree->firstChild->nextSibling, prog_symb_tab, tab_num, &t2))
            return 2;
        
        if (strcmp(t1, t2))
            printWarn("Operator error (not using the same type operand)", tree->firstChild->name, prog_symb_tab->symb_tab[tab_num].fun_name);
        break;
    case _FUN:
        for (i = 0; i < prog_symb_tab->size_tab; i++){
            if (!strcmp(prog_symb_tab->symb_tab[i].fun_name, tree->name)) {
                fun_tab = &prog_symb_tab->symb_tab[i];
                break;
            }
        }
        if (!fun_tab){
            printError("Function undifined", tree->name, prog_symb_tab->symb_tab[tab_num].fun_name);
            return 2;
        }
        if (check_param(tree, prog_symb_tab, tab_num, i))
            return 2;
        break;
        
    case _ASSIGN:
        if (get_type(tree->firstChild, prog_symb_tab, tab_num, &t1) || get_type(tree->firstChild->nextSibling, prog_symb_tab, tab_num, &t2))
            return 2;

        if (strcmp(t1, t2))
            printWarn("Asign error", tree->firstChild->name, prog_symb_tab->symb_tab[tab_num].fun_name);
        break;
    
    default:
        break;
    }

    if (next_Sibling)
        return check_semantique_fun(tree->nextSibling, prog_symb_tab, tab_num, 1);
    else
        return 0;
}

int check_semantique(Node* tree, Prog_symb_tab* prog_symb_tab) {
    int i, fun_tab;
    
    if (!tree)
        return 0;
    
    for (Node* n = tree; n != NULL; n = n->nextSibling) {
        if(n->label == _DECL_FUN) {
            for (i = 0; i < 20; i++){
                if (!strcmp(prog_symb_tab->symb_tab[i].fun_name, n->name)){
                    fun_tab = i;
                    break;
                }
            }

            if (check_semantique_fun(n->firstChild, prog_symb_tab, fun_tab, 1)) {
                return 2;
            }
        }
    }
    return 0;
}