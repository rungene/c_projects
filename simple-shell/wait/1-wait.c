#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	pid_t child_pid;
	int wstatus;
	pid_t my_waitpid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (child_pid == 0)
	{
		printf("Child pid id %ld",
				(long)getpid());
		if (argc == 1)
		{
			pause();
		}
		_exit(atoi(argv[1]));
	}
	else
	{
		do
		{
			my_waitpid = waitpid(child_pid, &wstatus, WCONTINUED | WUNTRACED);
			if (my_waitpid == -1)
			{
				perror("waitpid");
				exit(EXIT_FAILURE);
			}
			
			if (WIFEXITED(wstatus))
			{
				printf("terminated normally, status is %d\n", WEXITSTATUS(wstatus));
			}
			else if (WIFSIGNALED(wstatus))
			{
				printf("terminated by a signal %d\n", WTERMSIG(wstatus));
			}
			else if (WIFSTOPPED(wstatus))
			{
				printf("stopped by delivery of a signal %d\n", WSTOPSIG(wstatus));
			}
			else if (WIFCONTINUED(wstatus))
			{
				printf("resumed\n");
			}
		}
		while (!WIFEXITED(wstatus) && 
				!WIFSIGNALED(wstatus));
		exit(EXIT_SUCCESS);
	}
}
