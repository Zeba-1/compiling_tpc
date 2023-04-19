#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "trad.h"
#include "symb_tab.h"
#include "../tree.h"

static void w_instruction(Node* inst, FILE* target_f) {
    if (!inst)
        return;

    switch (inst->label) {
    case _ASSIGN:
         w_instruction(inst->firstChild->nextSibling, target_f);
        break;
    case _CONST_CHAR:
    case _CONST:
        fprintf(target_f, "push %d\n", inst->const_val);
        break;
    case _BIN_OP:
        w_instruction(inst->firstChild, target_f);
        w_instruction(inst->firstChild->nextSibling, target_f);
        fprintf(target_f, "pop rcx\n");
        fprintf(target_f, "pop rax\n");
        if (inst->const_val == '+')
            fprintf(target_f, "add rax, rcx\n");
        else if (inst->const_val == '-')
            fprintf(target_f, "sub rax, rcx\n");
        else if (inst->const_val == '*')
            fprintf(target_f, "imul rax, rcx\n");
        fprintf(target_f, "push rax\n");
        break;
    case _PARAM:
        w_instruction(inst->nextSibling, target_f);
        break;
    case _BODY:
        for (inst = inst->firstChild; inst; inst = inst->nextSibling)
            w_instruction(inst, target_f);
        break;
    case _DECL_VAR:
    default:
        break;

    }
    
}

static void w_main(Node* main, FILE* target_f) {
    fprintf(target_f, "global _start\nsection .text\n");
    fprintf(target_f, "extern show_registers\n"); // for dev purpose only del when RENDU
    fprintf(target_f, "_start:\n");
    w_instruction(main->firstChild, target_f);
    fprintf(target_f, "call show_registers\n"); // for dev purpose only del when RENDU
    fprintf(target_f, "mov rax, 60\nmov rdi, 0\nsyscall\n");
}

int trad_nasm(Node* tree, Prog_symb_tab* prog_symb_tab, char* target_name) {
    FILE* target_f = fopen(target_name, "w");
    
    for (tree = tree->firstChild; tree; tree = tree->nextSibling) {
        if (tree->label == _DECL_FUN && !strcmp(tree->name, "main"))
            w_main(tree, target_f);
    }
    
    fclose(target_f);
    return 0;
}