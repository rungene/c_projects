#include "main.h"

/**
 * printAlpha - prints alphabets skipping c and k
 *
 * Return: zero on success
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
