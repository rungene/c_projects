#include "main.h"

void addLast(node **head, int val)
{
	node *newNode = malloc(sizeof(node));
	newNode-> data = val;
	newNode->next = NULL;

	if(*head == NULL)
	{
	/*empty list */
		*head = newNode;
	}
	else
	{

		node *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
	/* add the newNode to the end of linked list */
	lastNode->next = newNode;
	}
}
