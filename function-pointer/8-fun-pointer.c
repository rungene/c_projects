#include <stdio.h>
/* function Pointers and callbacks */
void A()
{
	printf("Hello");
}

void B(void (*ptr)())/* function pointer as arguments */
{
	ptr(); /* call-back funthat "ptr" points to */
}

int main(void)
{
	B(A); /* A is a call back function */
}
