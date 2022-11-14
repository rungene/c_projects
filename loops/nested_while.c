#include <stdio.h>
/**
 * main -entry point of the program
 *
 * Return: returns zero on success
 */
int main(void)
{
	int i = 0;
	
	while (i <= 3)
	{
	int j = 0;
	while (j <= 3)
	{
	printf("%d", j);
	printf("\n");
	j++;
	}
	printf("%d", i);
	printf("\n");
	i++;
	}
	return (0);
}

