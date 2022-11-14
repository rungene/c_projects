#include "main.h"

/**
 * printMult - prints multiples of number 1-9
 * multiplication table
 */

void printMult(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if ((i * j) < 9)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
		}
	_putchar('\n');
	}

}
