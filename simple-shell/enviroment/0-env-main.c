#include <stdio.h>

/**
* main - prints the enviroment
* @ac: argument count
* @av: argument vector
* @env: NULL terminated array of strings
*
* Return: Always 0
*/
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
