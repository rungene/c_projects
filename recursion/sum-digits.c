#include <stdio.h>

/**
* sumDigits - calculates the sum of digits
* @num: The first operand
*
* Return: Returns the sum of the digits
*/
unsigned int sumDigits(unsigned int num)
{
	if (num == 0)
		return (0);
	return ((num % 10) + sumDigits(num / 10));
}

/**
* main - checks other functions
*
* Return: Returns 0 Always
*/
int main(void)
{
	printf("The sum of digits %i\n", sumDigits(53));
	return (0);
}
