
#include <stdio.h>
#include <stdlib.h>

/**
* struct node - singly linked list node
* @data: member of int type
* @next: member of pointer to the next node
*
* Description: singly linked list node structure
*/
typedef struct node
{
	int data;
	struct node *next;
}node;
