#include <stdio.h>

int main(void)
{
	int ch;

	for(ch = 0 + '0'; ch < 10 + '0'; ch++)
	{
	putchar(ch);
	putchar(',');
        putchar(' ');

	}
	putchar('\n');
        return (0);
}
