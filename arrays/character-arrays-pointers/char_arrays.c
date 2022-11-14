#include <stdio.h>
#include <string.h>

/**
* main - runs other functions
* Return: 0 Always
*/
int main(void)
{
	char c[] = "John";
	int len = strlen(c);

	printf("Size on bytes: %ld\n", sizeof(c));
	printf("Length: %d\n", len);
	return (0);
}
