#include <stdio.h>
/**
 * main - entry of the program
 *
 * Return : Program returns zero on success
 */

int main(void)
{
	int i, j;
	
	for(i = 0 + '0'; i < 10 + '0'; i++)
	{
	for(j = 0 + '0'; j < 10 + '0'; j++)
	{
	putchar(i);
	putchar(j);
	if(i != 9 && j != 9)
	{
	putchar(',');
        putchar(' ');
	}
        }
	}
	putchar('\n');
}
