#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * struct node - singly linked list
 * @data: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct node
{
	int data;
	struct node *next;
} node;

#include <stdio.h>
#include <stdlib.h>

#endif /* MAIN_H */
