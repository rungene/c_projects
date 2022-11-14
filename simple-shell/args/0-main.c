#include <stdio.h>

/**
* main - checks code
* @ac: argument counter
* @av: argument vector
*
* Return: 0 on success
*/
int main(__attribute__((unused))int ac, char **av)
{
	int count = 0;

	while (av[count])
	{
		printf("av[%d], %s\n", count, av[count]);
		count++;
	}
	return (0);
}
