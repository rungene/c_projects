#include <stdio.h>

/**
* main - prints multi-dimentional arrays
*
*Return: 0 Always.
*/
int main(void)
{
	/* an array with 5 rows and 2 columns */
	int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
	int i, j;

	/* output each array element's value */
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	return (0);
}
