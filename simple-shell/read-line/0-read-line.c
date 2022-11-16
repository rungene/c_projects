#include "main.h"

int main(__attribute__((unused))int ac, __attribute__((unused))char **argv)
{
	char *line = NULL, *line_copy = NULL;
	size_t len = 0;
	ssize_t nread;
	const char *delim = " \n";
	int num_tokens = 0, i = 0;
	char *token;
	char **av;
	char *prompt = "$ ";


	while (1)
	{
	printf("%s", prompt);
	/*get the string the user inputs and pass it*/
	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}
	
	/*Dynamically allocate space to store chars read by getline */
	line_copy = malloc(sizeof(char) * nread);
	/* check if getline failed/reached EOF or interrupted by a signal(CTR + D) */
	if (line_copy == NULL)
	{
		perror("tsh: memory allocation failed");
		exit(EXIT_FAILURE);
	}
	/*make a copy to line(command typed */
	strcpy(line_copy, line);
	/*split the string entered into an array of words */
	/* calculate the total number of token */
	token = strtok(line, delim);
 /* allocate space to store the variable arguments but before then determine how many tokens are there*/
	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;
	/* Allocate memory to hold the array of strings*/
	av = malloc(sizeof(char *) * num_tokens);
	if (av == NULL)
	{
		perror("av: memory allocation failed");
		exit(EXIT_FAILURE);
	}

	/*store each token in the argv array */
	token = strtok(line_copy, delim);

	for (i = 0; token != NULL; i++)
	{
		av[i] = malloc(sizeof(char) * strlen(token));
		strcpy(av[i], token);

		token = strtok(NULL, delim);
	}
	/*set the last index of argv to NULL to terminate the array of strings*/
	av[i] = NULL;

	/* execute the command */
	cmdexec(av);
	}
	free(line);
	free(line_copy);
	free(av);
	exit(EXIT_SUCCESS);
	return (0);
}
