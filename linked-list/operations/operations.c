#include <main.h>

/**
* create - creates a node
* @text: pointer to a string
*
* Return: pointer to a node
*
* Description: create new list element of type thing
* from the supplies text string
*/
thing *create(char *text)
{
	thing *newptr = NULL;

	newptr = (thing *)malloc(sizeof(thing));
	newptr->item = (char *)malloc(sizeof(strlen(item + 1)));
	strncpy(newptr->item, text);
	newptr->next = NULL;

	return (newptr);
}
