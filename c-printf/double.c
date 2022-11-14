#include "main.h"

/**
* doubled - doubles numbers
* @num: number to be doubled
*
* Return: double number
*/
int doubled(int *num)
{
	int *ptr;

	ptr = num;

	return (*ptr * 2);
}

/**
* main - checks the code
*
* Return: 0 Always
*/
int main(void)
{
	int num = 5;

	printf("The num.%d doubled %d\n", num, doubled(&num));
	return (0);
}
