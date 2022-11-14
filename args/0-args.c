#include <stdio.h>

/**
* @ main - checks the code

* @argc - argument counter
* @argv - argument vector
*
* Return: 0 Always(Success)
*/
int main(int argc, char **argv)
{
	int count;

	printf("The name of the prorgam is: %s\n", argv[0]);
	if (argc == 1)
		printf("There are no extra args passed beside the program \n");
	if (argc > 1)
	{
		printf("Extra args passed\n");
		printf("The number of args passed %d\n", argc);

		for (count = 0; count < argc; count++)
			printf("argv[%d] %s\n", count, argv[count]);
	}
	return (0);
}
