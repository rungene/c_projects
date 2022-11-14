#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int bytes, fd;
	
	fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		perror("r1");
		exit(1);
	}
	bytes = write(fd, "Hello rungene\n", strlen("Hello rungene\n"));

	printf("called write(%d, \"Hello rungene\\n\", %ld)."
	" It returned %d\n", fd, strlen("Hello rungene\n"), bytes);
	close(fd);

	 return (0);
}
