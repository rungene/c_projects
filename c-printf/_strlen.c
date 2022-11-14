#include "main.h"

/**
* _strlen - prints the length of a string
* @:str - pointer to the string of characters.
*
* Return: Length of the string
* or -1 incase something goes wrong
*/
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL) return -1;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
* main - checks the code
*
* Return: 0 Always(Success)
*/
int main(void)
{
	int len = 0;
	char *name = "Clevers Rungene";

	len = _strlen(name);
	printf("The string length is %d\n", len);
	return (0);
}
