#ifndef _MAIN_H
#define _MAIN_H

typedef struct node
{
	int data;
	struct node *next;
}node;

void printList(node *head);
void addLast(node **head, int val);

#include <stdlib.h>
#include <stdio.h>
#endif
