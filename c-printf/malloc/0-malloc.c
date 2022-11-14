#include <stdio.h>
#include <stdlib.h>

/**
* malloc_demo - demos malloc
*
* Return: Nothing
*/
void malloc_demo(void)
{
	int *ptr;
	int n, i;

	printf("Enter the number of elements\n");
	scanf("%d", &n);
	printf("The number of elements entered: %d\n", n);

	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		printf("The memory was not allocated\n");
	}
	else
	{
		printf("The memory was allocated\n");

		for (i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
			printf("%d", ptr[i]);
		}
		printf("\n");
	}
	free(ptr);
}

/**
* main - checks the code
*
* Return 0 Always
*/
int main(void)
{
	malloc_demo();
	return (0);
}
