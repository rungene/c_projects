#include <stdio.h>

int Add(int a, int b)
{
	return a+b;
}

int main(void)
{
	int add;
	int (*p)(int, int);
	p = Add;

	add = p(2, 3);/* Derefrencing and function execution */
	printf("The addition %d\n", add);
	return (0);
}
