#include "header.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(int argc, char **argv)
{
	ssize_t n;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename\n", argv[0]);
		exit(1);
	}
	n = read_write(argv[1], 256);
	printf("\n (The number od chars printed: %li)\n", n);
	    n = read_write(argv[1], 900);
	    printf("\n (The number od chars printed: %li)\n", n);
	 return (0);

}

