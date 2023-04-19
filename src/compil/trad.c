#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "trad.h"
#include "symb_tab.h"
#include "../tree.h"

static void w_main(FILE* target_f) {
    fwrite("global _start\nsection .text\nstart:\n", sizeof(char), 35, target_f);
    /* la on lance la trad du main */
    fwrite("mov rax, 60\nmov rdi, 0\nsyscall\n", sizeof(char), 31, target_f);
}

int trad_nasm(Node* tree, Prog_symb_tab* prog_symb_tab, char* target_name) {
    FILE* target_f = fopen(target_name, "w");
    w_main(target_f);
    fclose(target_f);
    return 0;
}