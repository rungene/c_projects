#include "main.h"

void printList(node *head)
{
	node *temp = head;

/* iterate the entire list and print data */
	while (temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
