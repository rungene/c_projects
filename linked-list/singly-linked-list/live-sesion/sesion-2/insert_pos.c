#include "header.h"
#include <stdlib.h>

/**
* insert_pos - inserts a node in a linked list at a given position.
* @head:  double pointer to the list
* @n: integer to insert
*
* Return: pointer
*/


listint_s *insert_pos(listint_s **head, unsigned int po    s, int n)
{
	unsigned int i;
	listint_s *current, *new;

	if (head == NULL)
		return (NULL);
	
	if (pos != 0)
	{
		current = *head;
		for (i = 0; i < pos -1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (pos == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}


