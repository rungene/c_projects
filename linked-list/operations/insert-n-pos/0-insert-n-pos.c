#include "main.h"

node *head;
void insert(int data, int n);
void Print();
/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	/*Empty list */
	head = NULL;

	insert(5, 1);
	insert(4, 2);
	insert(3, 3);
	insert(2, 4);
	insert(1, 5);
	Print();

	return (0);
}

/**
* insert - inserts a node at n position
* @data: data to insert
* @n: The nth position to insert
*
* Return: Void
*/
void insert(int data, int n)
{
	node *temp1;
	node *temp2;
	int i;

	temp1 = (node*)malloc(sizeof(node));
	temp1->data = data;
	temp1->next = NULL;

	if (n == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	temp2 = head;
	for (i = 0; i < n - 2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

/**
* Print - prints the linked list
*
* Return: void
*/
void Print(void)
{
	node *temp = head;
	
	printf("The list is: ");
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
