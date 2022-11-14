#include <stdio.h>

/**
* main - prints the size of an array and the address of an array
*
* Return: Always 0.
*/
int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);
	printf("&b[0]: %p\n", &b[0]);
	printf("size of(b): %lu\n", sizeof(b));
	printf("sizeof(&b): %lu\n", sizeof(&b));
	return (0);
}
