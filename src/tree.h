#ifndef __TREE__
#define __TREE__

typedef enum {
  _PROG,
  _DECL_VAR,
  _DECL_FUN,
  _PARAM,
  _BODY,
  _ASSIGN,
  _VAR,
  _FUN,
  _CONST_CHAR,
  _CONST,
  _BIN_OP,
  _COMP,
  _RETURN,
  _IF,
  _NON,
  _WHILE
} label_t;

typedef struct Node {
  label_t label;
  struct Node *firstChild, *nextSibling;
  int lineno;

  int const_val;
  char* name;
  char* type;
  int param;
  int fun;
} Node;

Node *makeNode(label_t label);
void addSibling(Node *node, Node *sibling);
void addChild(Node *parent, Node *child);
void deleteTree(Node*node);
void printTree(Node *node);

#define FIRSTCHILD(node) node->firstChild
#define SECONDCHILD(node) node->firstChild->nextSibling
#define THIRDCHILD(node) node->firstChild->nextSibling->nextSibling

#endif
