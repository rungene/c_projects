i#include <stdio.h>
#include <stdlib.h>

/**
* struct node - doubly linked list node
* @data: member of int type
* @next: member of pointer to the next node
* @prev: member of pointer to the previous node
*
* Description: singly linked list node structure
*/
typedef struct node
{
	int data;
	struct node *prev
	struct node *next;
}node;
