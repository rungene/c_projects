#include <stdio.h>

/**
* increment - increase a by 1
* @a: the first operand
* Return: returns nothing
*/
void increment(int *p)
{
	*p = (*p) + 1;
	printf("Address of var inside increment = %p\n", (void *)p);
}

/**
* main - calls other functions
*
* Return: 0 always.
*/

int main(void)
{
	int a;

	a = 10;
	increment(&a);
	printf("a = %d\n", a);
	printf("Address of var inside main = %p\n", (void *)&a);
	return (0);
}
