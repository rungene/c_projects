#include "main.h"

/**
* doubled - a function that doubles int
* @num: pointer passed
*
* Return: Retunrs int
*/

int doubled(int *num)
{
	int *ptr;

	ptr = num;

	return (*ptr * 2);
}

/**
* main - runs other functions
*
* Return: 0 Always
*/
int main(void)
{
	int num = 5;

	printf("The num. %d doubled: %d\n", num, doubled(&num));
	return (0);
}

