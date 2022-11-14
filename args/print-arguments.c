#include <stdio.h>

/**
* main - accepts any number of command-line arguments and prints them out:
* @argc: This is the first operand
* @argv: The second operand.
*
* Return: 0 Always
*/
int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}
	return (0);
}
