#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: the program returns 0 if success, non zero if not
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 10);
	if (lastDigit > 5)
	{
	printf("Last digit of %d is %d is greater than 5", n, lastDigit);
	}
	else if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else
	{
	printf("Last digit of %d is %d is less than 6 and not zero", n, lastDigit);
	}
	return (0);
}
