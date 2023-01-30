#include "header.h"
#include <stdlib.h>

/**
* begin_node - adds a new node to the begining of a linked list
* @head: double pointer to the linked list
* @n: number to add
*
* Return: address of new node
*/

listint_s *begin_node(listint_s **head, const int n)
{
	listint_s *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_s));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new; 
	return (new);
}
