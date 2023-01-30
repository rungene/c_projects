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
* insert_node_n_pos - inserts a node at the n doubly
* linked list
* @x: first params, int data passed to the fun
* @n: second params, position to insert
* Return: Void
*/
void insert_node_n_pos(int x, int n)
{
	node *new_node;
	node *temp;
	node *temp2;

	temp = head;
	new_node = get_node(x);
	/*Empty list*/
	if (head == NULL)
	{
		head = new_node;
		return;
	}
	if (n == 0)
	{
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
		return;
	}
	while (n != 0)
	{
		temp = temp->next;
		n--;
	}
	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
	else
	{
	/*temp represents n node*/
	/*temp2 represents n+1 node*/
	temp2 = temp->next;

	temp->next = new_node;
	temp2->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;
	}
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

	insert_node_n_pos(1,0);
	Print();
	reverse_print();
	insert_node_n_pos(2,0);
	Print();
	reverse_print();
	insert_node_n_pos(3,3);
	Print();
	reverse_print();
	insert_node_n_pos(4,2);
	Print();
	reverse_print();
	insert_node_n_pos(5,1);
	Print();
	reverse_print();
	insert_node_n_pos(12, 0);
	Print();
	reverse_print();
	return (0);
}
