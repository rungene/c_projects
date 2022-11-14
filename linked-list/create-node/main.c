#include "main.h"

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	node *head = NULL;

	head = (node *)malloc(sizeof(node));
	head->data = 45;
	head->next = NULL;
	printf("%d", head->data);
	return (0);
}
