#include "main.h"

void cmdexec(char **av)
{
	char *command = NULL;

	if (av)
	{
	/*get the command*/
		command = av[0];

	/*execute the command with execve*/
		if (execve(command, av, NULL) == -1)
			perror("Error:");
	}
}
