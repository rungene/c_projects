#include "header.h"

/**
* main - check the code
*
* Return: 0 Always
*/
int main(void)
{
	node *head;
	
	head = malloc(sizeof(node));
	head->data = 45;
	head->next = NULL;

	printf("%d", head->data);

	return (0);
}
