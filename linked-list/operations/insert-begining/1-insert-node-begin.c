#include "main.h"
node *insert(int x, node *head);
void Print(node *head);

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	int x, n, i;
	node *head;

	/*Empty list*/
	head = NULL;
	printf("Number of elements? ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Element to insert ");
		scanf("%d", &x);
		head = insert(x, head);
		Print(head);
	}
	return (0);
}

/**
* insert - insert a node
* @x: data to be inserted
* @head: head pointer
*
* Return: the new head
*/
node *insert(int x, node *head)
{
	node *temp;

	temp = (node *)malloc(sizeof(node));
	temp->data = x;
	temp->next = NULL;
	if (head != NULL)
		temp->next = head;
	head = temp;
	return (head);
}
/**
* Print - prints the nodes data
* @head: pointer to the head
*
* Return: Void
*/
void Print(node *head)
{
	node *temp = head;

	printf("List is: ");
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
