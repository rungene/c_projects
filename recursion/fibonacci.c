#include <stdio.h>

/**
* fibonacci - prints fibonacci sequence
* Return: Nothing
*/

void fibonacci(void)
{
	int i = 0;

	while (i <= 34)
	{
		if (i == 0)
		{
			printf("%d\n", i);
			i++;
			continue;
		}
		if (i == 1)
		{
			printf("%d\n", i);
			continue;
		}
		printf("%d\n", i);
		i =i + (i - 1) + (i - 2);
	}
}

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	fibonacci();
	return (0);
}
