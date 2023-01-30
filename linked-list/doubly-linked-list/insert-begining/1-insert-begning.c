#include "main.h"
/**
* get_node - creates a new node, initialize it
* @x: first params, int data passed to the fun
*
* Return: pointer to the new node created
*/
node *get_node(int x)
{
	node *new_node;

	new_node = (node *)malloc(sizeof(node));
	new_node->data = x;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}

/**
* insert_node_begining - inserts a node at the begining
* @x: fisrt params, int data paased to the fun
* @head: second params, double pointer to the head
*
* Return: Void
*/
void insert_node_begining(int x, node **head)
{
	node *new_node;

	new_node = get_node(x);
	/*Empty list*/
	if (head == NULL)
	{
		head = new_node;
		return;
	}
	/*list not empty*/
	head->prev = new_node;
	new_node->next = head;
	head = new_node;
}

/**
* Print- forward printing.
* @head: pointer to the head
*
* Return: Void
*/
void Print(node *head)
{
	node *temp;

	temp = head;
	printf("Forward: ");
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
/**
* reverse_print - backward printing
* @head: pointer to the head
*
* Return: Void
*/
void reverse_print(node *head)
{
	node *temp;

	temp = head;
	if (temp == NULL)/*empty list, exit*/
		return;
	/*traverse to the end node*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*temp represents the last node*/
	printf("Reverse: ");
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}
/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	node head;
	/*empty list*/
	head = NULL;

	insert_node_begining(1, &head);
	Print(head);
	reverse_print(head);
	insert_node_begining(2, &head);
	Print(head);
	reverse_print(head);
	insert_node_begining(3, &head);
	Print(head);
	reverse_print(head);
	insert_node_begining(4, &head);
	Print(head);
	reverse_print(head);
	insert_node_begining(5, &head);
	Print(head);
	reverse_print(head);
	return (0);
}
