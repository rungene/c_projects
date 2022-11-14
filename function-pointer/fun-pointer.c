#include <stdio.h>

/**
* fun - a normal function with an int parameter
* @a: First operand of the int
* Return: Void return
*/
void fun(int a)
{
	printf("Value of 'a' is %d\n", a);
}

/**
* main - Runs other functions
*
* Return: 0 Always(on Success)
*/
int main(void)
{
	void (*fun_ptr)(int) = &fun;

	/* the above is equivalent of the following two:
	   void (*fun_ptr)(int);
	   fun_ptr = &fun;
	   */
	(*fun_ptr)(10);
	return (0);
}
