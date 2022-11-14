#include "main.h"

/**
 *printNumto15 - prints 0 -15 numbers
 */
void printNumto15(void)
{
	int i;

	for (i = 1; i <= 15; i++)
	{
		if (i < 9)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar((i / 10) + '0');/*prints first digit in number */
			_putchar((i % 10) + '0');/*prints last digit in mumber */
		}
	_putchar('\n');
	}
}
