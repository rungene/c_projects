#include "main.h"

/**
* create - creates a node
* @text: pointer to a string
*
* Return: pointer to a node
*
* Description: create new list element of type thing
* from the supplies text string
*/

thing *start = NULL;
thing *createnew(char *text)
{
	thing *newptr = NULL;

	newptr = (thing *)malloc(sizeof(thing));
	newptr->item = (char *)malloc(sizeof(strlen(text)+1);
	strcpy(newptr->item, text);
	newptr->next = NULL;

	return (newptr);
}

/**
* find - search through a linked list to find an element
* @thing: pointer to the head
* @text: pointer to the string
*
* Return: True or false
*/
bool find(thing *head, char *text)
{

}
/**
* delelement- remove from the list the first instance
of an element containing a given text string.
* @head: head pointer
* @text: pointer to the string
*
* Return: pointer to the node
*
* Description:NOTE!! delete requests for elements
* not in the list are silently ignored
*/
thing *delelement(thing *head, char *text)
{
	thing *p, *prev;
	prev = NULL;
	for (p = head; p != NULL; p = p ->next)
	{
		if(strcmp(text, p->item) == 0)
		{
			if (prev == NULL)
				head = p->next;
			else
				prev->next = p->next;
			/*free of the string field */
			free(p->item);
			/*remove rest of the thing*/
			free(p);
			return (head);
		}
		prev = p;
	}
}

int main(void)
{

	
}
