#include "main.h"
/*Global varibale accesible anywhere*/
node *head;
void insert(int x);
void Print(void);

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	int x, n, i;

	/*Empty list*/
	head = NULL;
	printf("Number of elements? ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Element to insert ");
		scanf("%d", &x);
		insert(x);
		Print();
	}
	return (0);
}

/**
* insert - insert a node
* @x: data to be inserted
* Return: Void
*/
void insert(int x)
{
	node *temp;

	temp = (node *)malloc(sizeof(node));
	temp->data = x;
	temp->next = NULL;
	if (head != NULL)
		temp->next = head;
	head = temp;
}
/**
* Print - prints the nodes data
*
* Return: Void
*/
void Print(void)
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
