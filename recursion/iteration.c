#include <stdio.h>

/**
* factorial - Ilustrates factorial via iteration
* @n: The first operand
* 
* Return: returns the factorial 
*/
int factorial(int n)
{
	int i, res;

	i = 1;
	res = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}
/**
* main - runs other functions
*
* Return - 0 Always
*/
int main(void)
{
	int m = 5;
	int f;

	f = factorial(m);
	printf("5! = %d\n", f);
	return (0);
}
