#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - demostrates open
 *
 * Return: 0(success)
 */
int main(void)
{	int fd;

	fd =open("text.txt", O_CREAT | O_RDONLY);

	if (fd == -1)
		return (-1);

	return (fd);

}


