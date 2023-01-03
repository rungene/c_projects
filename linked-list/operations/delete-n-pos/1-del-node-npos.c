#include "main.h"
void insert(int n, node **head);
void Print(node **head);
void delete(int n, node **head);
/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	int n;
	node *head;
	/*empty list*/
	head = NULL;
	insert(1, &head);
	insert(2, &head);
	insert(5, &head);
	insert(7, &head);
	Print(&head);
	printf("Please enter the position to delete ");
	scanf("%d", &n);
	delete(n,  &head);
	Print(&head);
	return (0);
}

/**
* insert - inserts an int at the end of list
* @data: int data to insert
* @head: double pointer to the head
*
* Return: Void
*/
void insert(int data, node **head)
{
	node *temp1;
	node *temp2;

	temp1 = (node *)malloc(sizeof(node));
	temp1->data = data;
	temp1->next = NULL;
	/*if head is null, it's an empty list*/
	/*insert at begining*/
	if (*head == NULL)
	{
		*head = temp1;
	}
	else
	{
		/*otherwise, find the last node, add the new node*/
		temp2 = *head;
		/*Last node next address is null*/
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		/*Add the node at the end of linked list*/
		temp2->next = temp1;
	}
}

/**
* Print - prints the linked list;
* @head: double pointer to the head
*
* Return: Void
*/
void Print(node **head)
{
	node *temp;

	temp = *head;
	printf("The list is: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
/**
* delete - delete a node at nth position
* @n: the position to delete the node
* @head: pointer to pointer to head
*
* Return: void
*/
void delete(int n, node **head)
{
	int i;
	node *temp2;
	node *temp1 = *head;

	if (n == 1)
	{
		/*head now points to second node.*/
		*head = temp1->next;
		free(temp1);
		return;
	}
	for (i = 0; i < n - 2; i++)
	{
		/*temp1 points to (n-1)th node*/
		temp1 = temp1->next;
	}
	/*nth node*/
	temp2 = temp1->next;
	/*(n+1)th node*/
	temp1->next = temp2->next;
	/*Delete temp2*/
	free(temp2);
}
