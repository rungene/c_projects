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
	int *ptr, *ptr2;

	printf("Entre the size of the array: ");
	scanf("%d", &n);
	ptr = (int *)malloc(n * sizeof(int));/* Array is dynamically allocated */

	for (i = 0; i < n; i++)
	{
		ptr[i] = i + 1;
	}
	ptr2 = (int *)realloc(ptr, (n/2)*sizeof(int));
	printf("Prev block address = %p, new address = %p\n", (void *)ptr, (void *)ptr2);
	for (i = 0; i < n; i++)
	{
		printf("%d\n", ptr2[i]);
	}

	
	return (0);
}
