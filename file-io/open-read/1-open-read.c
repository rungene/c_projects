#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int fd, bytes;
	char *buf;

	fd = open("read-write.txt", O_CREAT | O_RDONLY);
	if (fd < 0)
	{
		perror("r1");
		exit(1);
	}
	printf("The fd is: %d\n", fd);

	buf = (char *) calloc(100, sizeof(char));

	bytes = read(fd, buf, 10);

	printf("called read(%d, buf, 10). returned that"
		" %d bytes were read.\n", fd, bytes);
	buf[bytes] = '\0';
	printf("Those bytes are as follows: %s \n", buf);
	return(0);
}

