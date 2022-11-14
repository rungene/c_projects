#include <stdio.h>

/**
* main - entry of the program
*
* Return: return 0 always
*/
int main(void)
{
	int a = 10, b = 11;
	int *p, *q;

	p = &a, q = &b;
	printf("The value of:\n'a'%d\n'b'%d\n'*p'%d\n'*q'%d\n", a, b, *p, *q);
	*q = *p;
	printf("The value of:\n'a'%d\n '*p'%d\n '*q'%d\n", a, *p, *q);
	printf("The pointers of:\n'a'%p\n'b'%p\n'*p'%p\n '*q'%p\n", (void *)&a, (void *)&b, (void *)p, (void *)q);
	return (0);
}
