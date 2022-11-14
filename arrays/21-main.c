#include <stdio.h>

/**
* main - pointers arithmetic
* 
* Return: Always 0.
*/
int main(void)
{
	int *p;
	int *p2;
	int a[5];
	
	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	printf("p + 2: %p\n", p + 2);
	printf("p + 2: %p\n", p + 2);
	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("p + 10: %p\n", p + 10);
	/* possible since a is evaluated */
	/* as an int * in this context */
	p = a;
	printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);
	return (0);
}
