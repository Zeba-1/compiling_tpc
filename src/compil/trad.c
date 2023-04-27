#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "trad.h"
#include "symb_tab.h"
# include "../tree.h"
 
int nb_var = 0;
int nb_while = 0;

static void w_instruction(Node* inst, FILE* target_f, Prog_symb_tab prog_tab, Symb_tab fun_tab);
 
Var* find_var(Node *node, Symb_tab fun_tab, Prog_symb_tab prog_tab) {
    for (int i = 0; i < fun_tab.size_tab; i++) {
        if (!strcmp(node->name, fun_tab.var_tab[i].name))
            return  &fun_tab.var_tab[i];
    }
    
    /* global check */
    for (int i = 0; i < prog_tab.global_tab.size_tab; i++) {
        if (!strcmp(node->name, prog_tab.global_tab.var_tab[i].name))
            return  &prog_tab.global_tab.var_tab[i];
    }
    return NULL;
}

static void w_binop(Node* inst, FILE* target_f, Prog_symb_tab prog_tab, Symb_tab fun_tab) {
    w_instruction(inst->firstChild, target_f, prog_tab, fun_tab);
    w_instruction(inst->firstChild->nextSibling, target_f, prog_tab, fun_tab);
    fprintf(target_f, "pop rcx\n");
    fprintf(target_f, "pop rax\n");
    if (inst->const_val == '+')
        fprintf(target_f, "add rax, rcx\n");
    else if (inst->const_val == '-')
        fprintf(target_f, "sub rax, rcx\n");
    else if (inst->const_val == '*')
        fprintf(target_f, "imul rax, rcx\n");
    fprintf(target_f, "push rax\n");
}

static void w_while(Node* inst, FILE* target_f, Prog_symb_tab prog_tab, Symb_tab fun_tab) {
    fprintf(target_f, "w_cond_%d:\n", ++nb_while);
    w_instruction(inst->firstChild, target_f, prog_tab, fun_tab);
    if (!strcmp(inst->firstChild->name, "<"))
        fprintf(target_f, "jge w_end_%d\n", nb_while); // tant que = saut si l'inverseé
    for (Node* child = inst->firstChild->nextSibling; child; child = child->nextSibling)
        w_instruction(child, target_f, prog_tab, fun_tab);
    
    fprintf(target_f, "jmp w_cond_%d\n", nb_while);
    fprintf(target_f, "w_end_%d:\n", nb_while);
}

static void w_instruction(Node* inst, FILE* target_f, Prog_symb_tab prog_tab, Symb_tab fun_tab) {
    Var* var;
    
    if (!inst)
        return;

    switch (inst->label) {
    case _DECL_VAR:
        fprintf(target_f, "sub rsp, 8\n"); // reserver la place
        find_var(inst, fun_tab, prog_tab)->offset = ++nb_var;
        break;
    case _ASSIGN:
        w_instruction(inst->firstChild->nextSibling, target_f, prog_tab, fun_tab);
        var = find_var(inst->firstChild, fun_tab, prog_tab);
        fprintf(target_f, "pop rax\n"); // reserver la place
        fprintf(target_f, "mov qword [rbp-%d], rax\n", 8*var->offset); // reserver la place
        break;
    case _VAR:
        var = find_var(inst, fun_tab, prog_tab);
        fprintf(target_f, "push qword [rbp-%d]\n", 8*var->offset); // reserver la place
        break;
    case _CONST_CHAR:
    case _CONST:
        fprintf(target_f, "push %d\n", inst->const_val);
        break;
    case _BIN_OP:
        w_binop(inst, target_f, prog_tab, fun_tab);
        break;
    case _WHILE:
        w_while(inst, target_f, prog_tab, fun_tab);
        break;
    case _COMP:
        w_instruction(inst->firstChild, target_f, prog_tab, fun_tab);
        w_instruction(inst->firstChild->nextSibling, target_f, prog_tab, fun_tab);
        fprintf(target_f, "pop rcx\npop rax\ncmp rax, rcx\n");
        break;
    case _PARAM:
        w_instruction(inst->nextSibling, target_f, prog_tab, fun_tab);
        break;
    case _BODY:
        for (inst = inst->firstChild; inst; inst = inst->nextSibling)
            w_instruction(inst, target_f, prog_tab, fun_tab);
        break;
    default:
        break;
    }
}

static void w_main(Node* main, FILE* target_f, Prog_symb_tab prog_tab) {
    nb_var = 0;
    Symb_tab fun_tab;
    /* trouve sa symb Tab */
    for (int i = 0; i < prog_tab.size_tab; i++) {
        if (!strcmp(main->name, prog_tab.symb_tab[i].fun_name))
            fun_tab = prog_tab.symb_tab[i];
    }
    
    fprintf(target_f, "_start:\n");
    fprintf(target_f, "push rbp\n");
    fprintf(target_f, "mov rbp, rsp\n");
    w_instruction(main->firstChild, target_f, prog_tab, fun_tab);
    fprintf(target_f, "mov rsp, rbp\n");
    fprintf(target_f, "pop rbp\n");
    fprintf(target_f, "call show_registers\n"); // for dev purpose only del when RENDU
    fprintf(target_f, "mov rax, 60\nmov rdi, 0\nsyscall\n");
}

static void w_begin(FILE* target_f) {
    fprintf(target_f, "global _start\n");
    fprintf(target_f, "extern show_registers\n"); // for dev purpose only del when RENDU
    /* Ecrire les variable global ici */
    fprintf(target_f, "section .text\n");
}

int trad_nasm(Node* tree, Prog_symb_tab prog_symb_tab, char* target_name) {
    FILE* target_f = fopen(target_name, "w");
    w_begin(target_f);

    for (tree = tree->firstChild; tree; tree = tree->nextSibling) {
        if (tree->label == _DECL_FUN && !strcmp(tree->name, "main"))
            w_main(tree, target_f, prog_symb_tab);
    }
    
    fclose(target_f);
    return 0;
}