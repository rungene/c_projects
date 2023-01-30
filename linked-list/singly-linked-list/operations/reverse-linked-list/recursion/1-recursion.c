#include "main.h"
node *insert(int data, node *head);
void Print(node *head);
node *reverse(node *p);

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	node *head = NULL;
	head = insert(1, head);
	head = insert(2, head);
	head = insert(3, head);
	head = insert(4, head);
	Print(head);
	head = reverse(head);
	Print(head);
	return (0);
}

/**
* insert - inserts a node at the end of list
* @data: int data to insert
*
* Return: head
*/
node *insert(int data, node *head)
{
	node *temp1, *temp2;

	temp1 = (node *)malloc(sizeof(node));
	temp1->data = data;
	temp1->next = NULL;
	if (head == NULL)
	{
		head = temp1;
	}
	else
	{
		temp2 = head;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp1;
	}
	return (head);
}


/**
* Print - prints linked list
*
* Return: Void
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

/**
* reverse - reverses a linked list using recursion
* @p: node pointer
*
* Return: head
*/
node *reverse(node *head)
{
	node *q, *p;

	if (p->next == NULL)
	{
		/*Exit condition*/
		head = p;
	}
	else
	{
		reverse(p->next);
		q = p->next;
		q->next = p;
		p->next = NULL;
	}
	return (head);
}
