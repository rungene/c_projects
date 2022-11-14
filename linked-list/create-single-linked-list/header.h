#ifndef _HEADER_H_
#define _HEADER_H_

/**
* struct node - linked list node
* @data: Integer data
* @next: pointer to the next node
*/
typedef struct node
{
	int data;
	struct node *next;
} node;

#include <stdio.h>
#include <stdio.lib>

#endif /* HEADER_H */
