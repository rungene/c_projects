#include <stdio.h>

/**
* sumArrayElements - sums elements in the passed array
* @A: Array elements passed
* @size: The size of the array
*
* Return: The function returns sum
*/
int sumArrayElements(int A[], int size) /*int *A / int [] are the same */
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += A[i];
	return (sum);
}

/**
* main - entry point of the program
*
* Return: 0 Always
*/
int main(void)
{
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A) / sizeof(A[0]);
	int total = sumArrayElements(A, size);

	printf("The sum of elements in an array: %d\n", total);
	return (0);
}
