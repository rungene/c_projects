#include "main.h"

/**
* print_all - prints all strings in linked list
*
* @head: pointer to first node in linked list
*
* Return: number of nodes in list
*/

int print_all(list_t *head)
{
	list_t *next;
	list_t *current = head;
	size_t n = 0;

	while (next != NULL)
	{
		printf("%s\n", current->str);
		n++;
		next = current->next;
	}
	return (n);
}
