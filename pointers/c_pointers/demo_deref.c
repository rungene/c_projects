#include "header.h"

/**
* demo_deref - demo function
*
* @n: address of variable
*/
void demo_deref(int *n)
{
	int p = 3;
	int *ptrp = &p;
	int *ptrn = n;

	printf("Value of p through derefrencing: %d\n", *ptrp);
	printf("Value of n through derefrencing: %d\n", *ptrn);
}
