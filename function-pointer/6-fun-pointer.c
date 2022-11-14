#include <stdio.h>
int Add(int a, int b)
{
	return a+b;
}
int main(void)
{
	int c;
	int (*p)(int,int);
	p = &Add;
	c = (*p)(1, 2); 
	printf("%d\n", c);
	
}
