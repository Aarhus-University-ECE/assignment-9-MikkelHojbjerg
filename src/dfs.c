/*
 * Search an expression using DFS.
 */

#include <stdio.h>		/* scanf, printf */
#include <stdlib.h>		/* abort */
#include <stdbool.h>		/* bool, true, false */
#include "dfs.h"


void DFT (Tnode * root){

	//Der bliver lavet en stack til tallene
	stack* treeStack = (malloc(sizeof(stack)));
	treeStack->top = NULL;

	//Rooten bliver pushet til stacken
	push(treeStack, root);

	//Hele træet bliver kørt igennem
	while(!isEmpty(treeStack)){

		//Det øverste i stacken bliver poppet
		Tnode *head = pop(treeStack);

		//Hvis der findes et rchild bliver det pushet til stacken
		if(head->rchild != NULL){
			push(treeStack, head->rchild);
		}

		//Findes der et lchild bliver det pushet til stacken
		if(head->lchild != NULL){
			push(treeStack, head->lchild);
		}
	}

}

Tnode *make_node (int num, Tnode * left, Tnode * right)
{

	//Alloker plads til en ny Tnode
	Tnode *newTnode = (malloc(sizeof(Tnode)));

	//Her bliver den nye node lavet og derefter returned
	newTnode->lchild = left;
	newTnode->rchild = right;
	newTnode->num = num;

	return newTnode;
}


/*
void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d", p->num);
}


void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
    printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);


  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}
*/

void push(stack *topp, Tnode *tnode)
{

	//Alloker plads til element
	node *elm = (malloc(sizeof(node)));

	//elm's next pejer på det øverste stacken
	elm->next = topp->top;

	//Nu får top værdien af elm
	topp->top = elm;

	//Dataen kommer ind i stacken
	elm->data = tnode;

}

bool isEmpty (stack * topp){

	//Stopper når stack's top er NULL
	return topp->top == NULL;
}

// Utility function to pop topp  
// element from the stack 

Tnode *pop (stack * topp)
{

	//Tjekker om stack's top er NULL
	if(topp->top !=NULL){
		//Hvis ikke bliver val tildelt data'en af stack's top
		Tnode* val = topp->top->data;
		//top rykker en gang frem
		topp->top = topp->top->next;

		return val;
	}

	//Hvis top == NULL bliver NULL retuneret
	return NULL;

}

/*
void print_stack (stack * topp)
{
  struct stack *temp = topp;

  while (temp != NULL)
    {

      print_node (temp->node);
      printf ("\n");

      temp = temp->next;
    }

  printf ("====\n");

  return;
}
*/
