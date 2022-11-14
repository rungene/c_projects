#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(__attribute__((unused))int ac, __attribute__((unused))char *av[])
{
	char *line = NULL, *line_copy = NULL;
	size_t len = 0;
	ssize_t nread;
	const char *delim = " \n";
	int num_tokens = 0, i;
	char *tokens;


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

	/*Dynamically allocate space */
	line_copy = malloc(sizeof(char) * nread);
	if (line_copy == NULL)
	{
		perror("tsh: memory allocation failed");
		exit(EXIT_FAILURE);
	}
	/*make a copy to line */
	strcpy(line_copy, line);
	/*split the string int an array of words */
	/* calculate the total number of token */
	token = strtok(line, delim);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;
	}
	free(line);
	exit(EXIT_SUCCESS);
	return (0);
}
