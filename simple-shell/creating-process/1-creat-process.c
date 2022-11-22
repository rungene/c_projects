#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
* main - fork and orphan process demosntrations.
*
* Return: 0 Alays
*/

int main(void)
{
	pid_t my_ppid;
	pid_t pid;

	printf("Before calling fork\n");
	pid = fork();

	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (pid == 0)
	{
		sleep(40);
		printf("Inside the child\n");
	}
	else
	{
		my_ppid = getpid();
		printf("Parent's pid %u", my_ppid);
	}
	return (0);
}
