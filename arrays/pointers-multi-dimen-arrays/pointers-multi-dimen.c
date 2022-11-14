#include <stdio.h>

/**
* main - runs other functions
*
* Return: 0 Always
*/
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int *p = arr;

	printf("arrr[0] = %d\n", *p);
	printf("arr[2] =  %d\n", *(p+2));
	printf("%p\n", p);
	printf("%p\n", arr);
}
