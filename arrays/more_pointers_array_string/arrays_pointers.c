#include <stdio.h>

/**
* main: calls other functions
*
*Return: Returns 0 always
*/
int main(void)
{
	int A[] = {2, 4, 5, 6, 8, 1};
	int i;

	for (i = 0; i <= 5; i++)
	{
		printf("Address = %p\n", (void *)&A[i]);
		printf("Address = %p\n", (void *)(A + i));
		printf("Value = %d\n", A[i]);
		printf("Value = %d\n", *(A + i));
	}
	return (0);
}
