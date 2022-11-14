#include <stdio.h>

/**
* main - runs other functions
*
* Return: 0 Always
*/
int main(void)
{
	int x = 5;
	int *p = &x;
	int **q = &p;
	int ***r = &q;

	*p = 6;
	printf("%d\n", *p);
	printf("The address of p:%p\n", (void *)p);
	printf("%p\n", (void *)*q);
	printf("%d\n", **q);
	printf("%p\n", (void *)**r);
	printf("%d\n", ***r);
	***r = 10;
	printf("x = %d\n",***r);
	**q = *p + 2;
	printf("x = %d\n", x);
	return (0);
}
