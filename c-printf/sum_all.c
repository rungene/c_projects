#include <stdarg.h>
#include "main.h"

/**
* sum_all - prints sum the numbers passed 
* @n: number of arguments passed
*
* Return: sum
*/
int sum_all(int n, ...)
{
	int i, sum = 0;
	va_list ptr;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum+= va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	int sum = sum_all(5, 1, 2, 3, 4, 5);
	printf("The sum is %d\n", sum);

	return (0);
}
