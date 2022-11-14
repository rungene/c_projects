#include <stdio.h>
#include <stdlib.h>

/**
* main - runs other functions
* @argc: the first operand
* @argv: second operand
*
* Return: 0 Always
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	printf("argc = %d\n", argc);
	printf("Lets see what is in argv[]\n");

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("Total = %d\n", sum);
	}
	return (0);
}
