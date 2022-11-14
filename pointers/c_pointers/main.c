#include "header.h"
#include <stdio.h>

/**
* main - entry point of the program
*
* Return: Always 0
*/
int main(void)
{
	int n;

	n = 402;
	printf("%d\n ", n);
	change_val(&n);
	printf("%d\n ", n);
	return (0);
}
