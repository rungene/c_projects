#include <stdio.h>

/**
* main - entry point of the program
*
*Return: Alays 0
*/
int main(void)
{
	int a = 10, b = 9, c;
	int *p, *q;

	p = &a;
	q = &b;
	c = *p;

	printf("Value of a = %d\n",a);
	printf("Value of a = %d\n",*p);
	printf("Address of a = %p\n",&a);
	printf("Address of a = %p\n",p);
	printf("Address of p = %p\n",&p);
	printf("Value of c = %d\n",c);
	return (0);
}
