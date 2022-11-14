#include <stdio.h>

/**
* main - runs other functions
*
* Return: 0 Always
*/
int main(void)
{
	int a = 1025;
	int *p;

	void *p0;
	p = &a;
	p0 = p;
	printf("Size of integer is %ld bytes\n", sizeof(int));
	printf("Address = %p, value = %d\n", (void *)p, *p);
	printf("Address = %p\n", (void *)p0);
	return (0);

}
