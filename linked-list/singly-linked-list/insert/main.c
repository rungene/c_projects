#include "main.h"

int main()
{
	node *head = NULL;
	addLast(&head, 10);
	addLast(&head, 20);
	addLast(&head, 30);

	printList(head);

	return(0);
}
