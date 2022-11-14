#include <stdio.h>
#include <unistd.h>

/**
* main -runs other functions
*
* Return: 0 Always on success
*/
int main(void)
{
	int n;

	n = write(1, "Hey Sam\n", 10);
	printf("The number of bytes: %d\n", n);

	return (0);
}
