#include <stdio.h>
#include "main.h"

/**
 * main - entry point for every c program
 *
 * Return: returns zero
 */

int main(void)
{
	int squared;

	squared = getSquare(2);
	printf("The int squared is: %d\n",squared);
	return (0);
}
