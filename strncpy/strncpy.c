#include <stdio.h>
#include <string.h>

/**
* main - Main entry point of the program
*
* Return: retuns 0;
*/
int main(void)
{
	char x[20] = "Hello World";
	char y[5];

	strncpy(y, x, sizeof(y));
	printf("%s\n", y);
	return (0);
}
