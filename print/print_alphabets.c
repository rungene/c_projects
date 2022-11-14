#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	
	for(ch = 'A' ; ch<= 'Z'; ch++)
	{
	putchar(tolower(ch));
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
