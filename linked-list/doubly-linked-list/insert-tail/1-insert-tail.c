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
* insert_node_tail - inserts a node at the tail doubly
* linked list
* @x: fisrt params, int data paased to the fun
*
* Return: Void
*/
void insert_node_tail(int x, node **head)
{
	node *new_node;
	node *temp;

	temp = *head;
	new_node = get_node(x);
	/*Empty list*/
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
	/*list not empty*/
	while (temp->next != NULL)
		temp = temp->next;/*Go to the last node*/
	temp->next = new_node;
	new_node->prev = temp;
}

/**
* Print- forward printing.
* @head: first params, head pointer
*
* Return: Void
*/
void Print(node *head)
{
	node *temp;

	temp = head;
	printf("Forward: ");
	/*traverse to the begining of the node*/
	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}
	/*temp represents the begining node*/
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
/**
* reverse_print - backward printing
* @head: first params, head pointer
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
	node *head;
	/*empty list*/
	head = NULL;

	insert_node_tail(1, &head);
	Print(head);
	reverse_print(head);
	insert_node_tail(2, &head);
	Print(head);
	reverse_print(head);
	insert_node_tail(3, &head);
	Print(head);
	reverse_print(head);
	insert_node_tail(4, &head);
	Print(head);
	reverse_print(head);
	insert_node_tail(5, &head);
	Print(head);
	reverse_print(head);
	return (0);
}
