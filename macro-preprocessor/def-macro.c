#include <stdio.h>
#define MAX(a,b) if(a>b) \
			printf("%d is maximum\n", a);\
			else \
			printf("%d is maximum\n", b);

int main(void)
{
	MAX(3,6);
	#undef MAX
	MAX(9,7);
	return (0);
}
