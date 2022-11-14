#include <stdio.h>

/**
*main - printing tyhe size, in bytes of a pointer
*
*Return: Always 0.
*/
int main(void)
{
	int *p;
	

	printf("Size of pointer: %lu\n", sizeof(p));
	return (0);
}
