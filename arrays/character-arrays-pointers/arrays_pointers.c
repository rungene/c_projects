#include <stdio.h>
/**
* print - prints the passed charaters
* @C: Character to print
*
* Return: nothing
*/
void print(const char *C)
{
	while (*C != '\0')
	{
		printf("%c", *C);
		C++;
	}
	printf("\n");
}
/**
* main - runs other functions
*
* Return: 0 Always.
*/
int main(void)
{
	char C[] = "Hello";

	print(C);
}
