#include <stdbool.h>		/* bool, true, false */

typedef struct Tnode
{
  int num;
  bool visited;
  struct Tnode *lchild;
  struct Tnode *rchild;
} Tnode;


Tnode *make_node (int num, Tnode * left, Tnode * right);

//void free_node (node * p);

//void print_node (node * p);

//void print_tree (node * p, int depth);

void DFT (Tnode * root);

typedef struct node
{
  Tnode* data;
  struct node *next;
} node;

typedef struct stack{
	node* top;
}stack;


void push (stack * topp, Tnode * node);

bool isEmpty (stack * topp);

//node *top (stack * topp);

Tnode *pop (stack * topp);

//void print_stack (stack * topp);
