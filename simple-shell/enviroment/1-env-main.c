#include <stdio.h>
#include <unistd.h>

/**
* main - prints the enviroment
*
* Return: Always 0
*/
int main(void)
{
	unsigned int i;
	extern char **environ;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}
	return (0);
}
