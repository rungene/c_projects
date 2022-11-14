#include "main.h"

/**
* _malloc_demo - demos malloc
*
* Return: Returns an array of values
*/
int _malloc_demo(void)
{
	int *nums;
	int len = 5;
	int avg = 0, i;

	nums = (int *)malloc(sizeof(int) * len);
	if (nums == NULL) return -1;

	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;
	nums[4] = 5;

	for (i = 0; i < len; i++)
	{
		avg+= nums[i];
	}
	avg = avg / len;

	return (avg);
}

/**
* main - checks the code
*
* Return: 0 Always on success
*/
int main(void)
{
	int avg = _malloc_demo();
	printf("The average %d\n", avg);
	return (0);
}
