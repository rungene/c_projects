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
* insert_node_tail - inserts a node at the tail doubly
* linked list
* @x: fisrt params, int data paased to the fun
*
* Return: Void
*/
void insert_node_tail(int x)
{
	node *new_node;
	node *temp;

	temp = head;
	new_node = get_node(x);
	/*Empty list*/
	if (head == NULL)
	{
		head = new_node;
		return;
	}
	/*list not empty*/
	while (temp->next != NULL)
		temp = temp->next;/*Go to the last node*/
	temp->next = new_node;
	new_node->prev = temp;
}

/**
* delete_tail_node - deletes the last node of linked list
*
* Return: void
*/
void delete_tail_node(void)
{
	node *temp;
	node *temp2;

	temp = head;
	/*Empty list*/
	if (head == NULL)
		return;
	while (temp->next != NULL)
		temp = temp->next;
	/*temp represents the last node*/
	/*temp2 represents the node before the last node*/
	temp2 = temp->prev;
	temp2->next = NULL;
	free(temp);
	temp = NULL;
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

	insert_node_tail(1);
	Print();
	reverse_print();
	insert_node_tail(2);
	Print();
	reverse_print();
	insert_node_tail(3);
	Print();
	reverse_print();
	insert_node_tail(4);
	Print();
	reverse_print();
	insert_node_tail(5);
	Print();
	reverse_print();
	printf("Nodes inserted at tail \n");
	delete_tail_node();
	printf("Node deleted at tail \n");
	Print();
	reverse_print();
	return (0);
}
