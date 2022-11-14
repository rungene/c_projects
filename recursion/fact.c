#include <stdio.h>

/**
* fact - demonstrates factorial
* @n: This is the first operand
*
* Return: returns the factorial of n-1
*/
int fact(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * fact(n - 1));
}

/**
* main - runs other functions
* Return: 0 Always
*/
int main(void)
{
	int m = 4;
	int factorial = fact(m);

	printf("The factorial of 4 is %d\n", factorial);
	return (0);
}

