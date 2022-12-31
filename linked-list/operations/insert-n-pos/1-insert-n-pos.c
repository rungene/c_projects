#include "main.h"

node *insert(node *head, int data, int n);
void Print(node *head);
/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	/*Empty list */
	node *head = NULL;

	head = insert(head, 5, 1);
	head = insert(head, 4, 2);
	head = insert(head, 3, 3);
	head = insert(head, 2, 4);
	head = insert(head, 1, 5);
	Print(head);

	return (0);
}

/**
* insert - inserts a node at n position
* @head: head pointer
* @data: data to insert
* @n: The nth position to insert
*
* Return: node
*/
node *insert(node *head, int data, int n)
{
	node *temp1;
	node *temp2;
	int i;

	temp1 = (node *)malloc(sizeof(node));
	temp1->data = data;
	temp1->next = NULL;

	if (n == 1)
	{
		temp1->next = head;
		head = temp1;
		return (head);
	}
	temp2 = head;
	for (i = 0; i < n - 2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;

	return (head);
}

/**
* Print - prints the linked list
* @head: pointer to the head
*
* Return: void
*/
void Print(node *head)
{
	printf("The list is: ");
	while (head != NULL)
	{
		printf("%d", head->data);
		head = head->next;
	}
	printf("\n");
}
