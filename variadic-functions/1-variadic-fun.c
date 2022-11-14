#include <stdarg.h>
#include <stdio.h>

/**
* AddNumbers - variadic fun to add numbers
* @n: fixed no of arguments
*
* Return: return Sum
*/
int AddNumbers(int n, ...)
{
	int Sum = 0;

	/* Declaring pointer to the argument list */
	va_list ptr;

	/*Intializing argument to the list pointer */
	va_start(ptr, n);

	for (int i = 0; i < n; i++)
		/* Accessing the current variable and pointing to the next one */
		Sum += va_arg(ptr, int);

	/* Ending argument list traversal */
	va_end(ptr);

	return Sum;
}

/**
* main - checks code
*
* Return: 0 Always
*/
int main(void)
{
	printf("\n 1 + 2 = %d ", AddNumbers(2, 1, 2));
	printf("\n 3 + 4 + 5 = %d ", AddNumbers(3, 3, 4, 5));

	return 0;
}
