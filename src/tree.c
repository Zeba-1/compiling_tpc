/* tree.c */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
extern int lineno;       /* from lexer */

Node *makeNode(label_t label) {
  Node *node = malloc(sizeof(Node));
  if (!node) {
    printf("Run out of memory\n");
    exit(1);
  }
  node->label = label;
  node-> firstChild = node->nextSibling = NULL;
  node->lineno=lineno;
  node->param = 0;
  node->fun = 0;
  return node;
}

void addSibling(Node *node, Node *sibling) {
  Node *curr = node;
  while (curr->nextSibling != NULL) {
    curr = curr->nextSibling;
  }
  curr->nextSibling = sibling;
}

void addChild(Node *parent, Node *child) {
  if (parent->firstChild == NULL) {
    parent->firstChild = child;
  }
  else {
    addSibling(parent->firstChild, child);
  }
}

void deleteTree(Node *node) {
  if (node->firstChild) {
    deleteTree(node->firstChild);
  }
  if (node->nextSibling) {
    deleteTree(node->nextSibling);
  }
  free(node);
}

void printTree(Node *node) {
  static bool rightmost[128]; // tells if node is rightmost sibling
  static int depth = 0;       // depth of current node
  for (int i = 1; i < depth; i++) { // 2502 = vertical line
    printf(rightmost[i] ? "    " : "\u2502   ");
  }
  if (depth > 0) { // 2514 = L form; 2500 = horizontal line; 251c = vertical line and right horiz 
    printf(rightmost[depth] ? "\u2514\u2500\u2500 " : "\u251c\u2500\u2500 ");
  }
  switch (node->label)
  {
  case _COMP:
  case _FUN:
  case _VAR:
    printf("%s : %s", StringFromLabel[node->label], node->name);
    break;
  case _BIN_OP:
  case _CONST_CHAR:
    printf("%s : %c", StringFromLabel[node->label], node->const_val);
    break;
  case _CONST:
    printf("%s : %d", StringFromLabel[node->label], node->const_val);
    break;
  case _DECL_VAR:
    printf("%s : %s (%s)", StringFromLabel[node->label], node->name, node->type);
    break;
  case _DECL_FUN:
    printf("%s : %s (%s)", StringFromLabel[node->label], node->name, node->type);
    break;
  default:
    printf("%s", StringFromLabel[node->label]);
    break;
  }
  printf("\n");
  depth++;
  for (Node *child = node->firstChild; child != NULL; child = child->nextSibling) {
    rightmost[depth] = (child->nextSibling) ? false : true;
    printTree(child);
  }
  depth--;
}
