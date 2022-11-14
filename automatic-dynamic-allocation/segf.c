#include <stdio.h>
/**
* segf - Let's segfault \o/
*
* Return: nothing
*/
void segf(void)
{
	char *str;
	
	printf("The value of char %p\n", str);
	str = "Holberton";
	printf("The value of char %s\n", str);
	printf("The value of the address %p\n", str);
	str[0] = 's';
	printf("The value of char %s\n", str);
}
/**
* main - concept introduction
*
* Return: 0.
*/
int main(void)
{
	segf();
	return (0);
}
