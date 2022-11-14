#include "main.h"

/**
 *stringManipulation - manipulates strings in various ways
* @str: string to be manipulated
*/
void stringManipulation(char *str)
{
	int len = getStringLength(str);
	int i;
	printf("%s\n", str);
	printf("The length of the string is: %d\n", len);
	if (len == 1)
		printf("%s\n", str);
	else
	{
		for (i = len; i >= 0; i--)
			_putchar(str[i]);
		_putchar('\n');
	}
}
