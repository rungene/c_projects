#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "clevers-samuel-rungene-nyambura";
	char delim[] = "-";
	char *token;

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}
