#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
* main - demonstrates pid and ppid.
*
* Return: 0 Always
*/
int main(void)
{
	pid_t my_pid, my_ppid;

	my_pid = getpid();
	my_ppid = getppid();

	printf("my_pid: %u\n", my_pid);
	printf("my_ppid: %u\n", my_ppid);

	return (0);
}
