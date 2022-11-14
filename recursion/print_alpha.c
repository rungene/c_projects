#include "main.h"

/**
* printAlpha - prints alphabet recursively
* @ch: The character to print
*
* Return: Nothing
*/
void printAlpha(char ch)
{
	char end = 'z';

	if (ch <= end)
	{
		_putchar(ch);
		_putchar('\n');
		printAlpha(ch + 1);
	}
}
