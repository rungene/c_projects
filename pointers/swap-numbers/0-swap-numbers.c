#include <stdio.h>

/**
* swap - swaps two ints without the 3rd variable
*
* Returns: void
*/
void swap(void)
{
	int a, b, *p0, *p1;

	a = 10;
	b = 20;
	p0 = &a;
	p1 = &b;

	printf("Before swaping, a = %d, b = %d\n", *p0, *p1);
	*p0 = *p0 + *p1;
	*p1 = *p0 - *p1;
	*p0 = *p0 - *p1;
	printf("After swaping, a = %d, b = %d\n", *p0, *p1);

}

int main(void)
{
	swap();
	return (0);
}
