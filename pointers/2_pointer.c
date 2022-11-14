#include <stdio.h>

/**
main - Ilustrating pointer to pointer
*
* Return: 0 Always
*/
int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;

	/* take the address of var */
	ptr = &var;

	/* take the address of ptr using address of operator & */
	pptr = &ptr;

	/* take the value using pptr*/
	printf("The value of var = %d\n", var);
	printf("Value available at *ptr = %d\n", *ptr);
	printf("Value available at **ptr = %d\n", **pptr);
	return (0);
}
