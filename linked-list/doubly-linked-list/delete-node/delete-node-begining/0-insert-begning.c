#include "main.h"
node *head;

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
*
* Return: Void
*/
void insert_node_begining(int x)
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
* delete_node_begining - delete node at the begining.
* using tem variable
*
* Return: void
*/
void delete_node_begining(void)
{
	node *temp;

	temp = head;
	head = head->next;
	free(temp);
	head->prev = NULL;
}

/**
* delete_node_begin - deletes node at begining
* without using temp variable
*
* Return: Void
*/

void delete_node_begin(void)
{
	head = head->next;
	free(head->prev);
}

/**
* Print- forward printing.
*
* Return: Void
*/
void Print(void)
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
*
* Return: Void
*/
void reverse_print(void)
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
	/*empty list*/
	head = NULL;

	insert_node_begining(1);
	Print();
	reverse_print();
	insert_node_begining(2);
	Print();
	reverse_print();
	insert_node_begining(3);
	Print();
	reverse_print();
	insert_node_begining(4);
	Print();
	reverse_print();
	insert_node_begining(5);
	Print();
	reverse_print();
	printf("Node deleted at begining..\n");
	delete_node_begining();
	Print();
	reverse_print();
	printf("Node deleted at begining..\n");
	delete_node_begin();
	Print();
	reverse_print();
	return (0);
}
