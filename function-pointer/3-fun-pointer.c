#include <stdio.h>
/* program showing functions pointers as a parameters */

void fun1()
{
	printf("Fun1\n");
}
void fun2()
{
	printf("Fun2\n");
}

/**
* wrapper - receives a simple fun as a param, calls the fun
*/
void wrapper(void (*fun)())
{
	fun();
}
int main(void)
{
	wrapper(fun1);
	wrapper(fun2);
	return 0;
}
