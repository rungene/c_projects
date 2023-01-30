#include "main.h"
/*Global var*/
node *head;

void insert(int data);
void Print(void);
void reverse(void);

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	head = NULL;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	Print();
	reverse();
	Print();
	return (0);
}

/**
* insert - inserts a node at the end of list
* @data: int data to insert
*
* Return: Void
*/
void insert(int data)
{
	node *temp1, *temp2;

	temp1 = (node *)malloc(sizeof(node));
	temp1->data = data;
	temp1->next = NULL;
	if (head == NULL)
	{
		head = temp1;
		return;
	}
	temp2 = head;
	while (temp2->next != NULL)
		temp2 = temp2->next;
	temp2->next = temp1;
}

/**
* Print - prints linked list
*
* Return: Void
*/
void Print(void)
{
	node *temp;

	temp = head;
	printf("The list is: ");
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

/**
* reverse - reverses a linked list
*
* Return: Void
*/
void reverse(void)
{
	node *prev, *current, *next;

	current = head;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
