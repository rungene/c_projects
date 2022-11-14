#include <stdio.h>
#include <stdlib.h>

/* Linked list: Inserting a node at begining */
struct Node
{
	int data;
	struct Node* next;
};

struct Node* head; /* Global variable, can be accessed anywhere */
void insert(int x)
{
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	head = temp;

}
void Print()
{
	struct Node* temp = head;
	printf("List is: ");
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next
	}
	printf("\n");
}
void insert(int x);
void _print();
int main (void)
{
	head = NULL; /* empty list */

	Printf("How many numbers?\n");
	int n, i;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter the number \n");
		scanf("%d", &x);
		insert(x);
		_print();
	}

	return(0);
}
