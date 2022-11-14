#include <stdio.h>

/**
* add - adds two ints
* @a: first int
* @b: second int
*
* Return: void
*/
void add(int a, int b)
{
	printf("Additions is %d\n", a+b);
}

/**
* substract - subtracts b from a
* @a: first int
* @b: second int
*
* Return: void
*/

void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}

/**
* multiply - multiplies a into b
* @a: first int
* @b: second int
*
* Return: void
*/
void multiply(int a, int b)
{
	printf("Multiplication %d\n", a*b);
}

/**
* divide - divides two ints
* @a: first int
* @b: second int
*
* Return: void
*/
void divide(int a, int b)
{
	printf("Division id %d\n", a/b);
}

/**
* main - runs other functions
*
* Return: 0 Always
*/

int main()
{
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply, divide};
	unsigned int operations;
	int a, b;
	
	printf("Enter the first int ");
	scanf("%d", &a);
	printf("Enter the second int ");
	scanf("%d", &b);
	printf("Enter choice: 0 for add, 1 for substra"
			"ct, 2 for multiply and 3 for division\n");
	scanf("%d", &operations);

	if (operations > 3)
		return 0;
	(*fun_ptr_arr[operations])(a,b);
	return (0);
}

