#include <stdio.h>
#include <string.h>

/**
* main - entry point of the program
*
* Return: 0 Always
*/
int main(void)
{
	char src[40];
	char dest[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialpoint.com");
	strncpy(dest, src, sizeof(dest));

	printf("Final copied string : %s\n", dest);
	return (0);
}
