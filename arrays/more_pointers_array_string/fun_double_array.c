#include <stdio.h>

/**
* doubleArray - doubles the passed array elements
* @a: Array passed
* @size: Size of the array
*/
void doubleArray(int a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		a[i] = 2 * a[i];
}

/**
* main - runs others functions
*
* Return: 0 Always
*/
int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int size = sizeof(a) / sizeof(a[0]);
	int k;

	doubleArray(a, size);
	for (k = 0; k < size; k++)
		printf("%d\n", a[k]);
	return (0);
}
