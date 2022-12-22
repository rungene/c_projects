#ifndef _MAIN_H_
#define _MAIN_H_

/**
* struct THING - singly linked list node
* @item: the pointer to the charater
* @next: pointer to the next node
*
* Description: singly linked list node structure
*/
typedef struct THING
{
	char *item;
	struct THING *next;
} thing;
thing *start = NULL;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

#endif /*MAIN_H */
