#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Return: returns zero on success
 */

int main(void)
{
        int base16,base16Char;

        for (base16 = 0+'0'; base16 <= 9+'0'; base16++)
        	putchar(base16);
        
	for (base16Char = 'a'; base16Char <= 'f'; base16Char++)
		putchar(base16Char);
        putchar('\n');
        return (0);
}

