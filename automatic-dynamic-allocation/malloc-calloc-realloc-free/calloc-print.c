#include <stdio.h>
#include <stdlib.h>

/**
* main - demos malloc
*
* Return: 0 Always
*/
int main(void)
{
	int n, i;
	int *ptr;

	printf("Entre the size of the array: ");
	scanf("%d", &n);
	ptr = (int *)calloc(n, sizeof(int));/* Array is dynamically allocated */

	for (i = 0; i < n; i++)
	{
		ptr[i] = i + 1;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");
	return (0);
}
