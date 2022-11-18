#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
* main - execve demostration
*
* Return: Always 0.
*/
int main(void)
{
	char *argv[] = {"/bin/ls", "-1", "/usr/", NULL};
	pid_t mypid;

	mypid = fork();
	if (mypid == -1)
		perror("Fork failed");
	printf("Before execve\n");

	if (mypid == 0)/* child */
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
	else/*parent*/
	{
		wait(NULL);
		printf("After execve\n");
	}
	return (0);
}

