#include <stdio.h>

/**
* main - runs other functions
*
*Return: 0 always
*/
int main(void)
{
	int a = 1025;
	int *p;
	char *p0;

	p = &a;
	/*Pointer arithmetic*/
	printf("The size of integer is %ld\n", sizeof(a));
	printf("Address = %p\n, value:%d\n", (void *)p, *p);
	printf("Address = %p\n, value:%d\n", (void *)(p + 1), *(p + 1));

	p0 = (char *)p;
	printf("Size of char is %ld\n", sizeof(char));
	printf("Address = %p\n, Value = %d\n", (void *)p0, *p0);
	printf("Address = %p\n, Value = %d\n", (void *)(p0 + 1), *(p0 + 1));

	return (0);
}
