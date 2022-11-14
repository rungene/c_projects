#include "main.h"

/**
 *printAlpha -prints alphabet with an exception of c and k
 *
 * Return: void
 */

void printAlpha(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'c' || i == 'k')
			continue;
		_putchar(i);
		_putchar('\n');
	}

}
