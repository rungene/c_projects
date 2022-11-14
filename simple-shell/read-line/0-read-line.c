#include <stdio.h>
#include <stdlib.h>

int main(__attribute__((unused))int ac, __attribute__((unused))char *av[])
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	while (1)
	{
	printf("$ ");

	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}
	printf("%s", line);
	printf("Number of characters: %ld\n", nread);
	}
	free(line);
	exit(EXIT_SUCCESS);
	return (0);
}
