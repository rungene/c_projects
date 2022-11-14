#include <stdio.h>
#include "car.h"

/**
* main - runs other functions
*
* Return: Always 0
*/
int main(void)
{
	struct car my_car;

	my_car.name = "Mercedes";
	my_car.class = "C";
	my_car.model = 200;

	printf("My car is %s %s %d, awesome\n",my_car.name, my_car.class, my_car.model);
	return (0);
}
