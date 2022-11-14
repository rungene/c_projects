#include <stdio.h>

/**
* increment - increases the passed int
* @a: The value to increase
*/
void increment(int *a)
{
	*a = (*a) + 1;
}

/**
* main - runs other functions
*
* Return: 0 Always
*/
int main(void)
{
	int a = 10;

	increment(&a);
	printf("The incresed value of a: %d\n", a);
	return (0);
}
