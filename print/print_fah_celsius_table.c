#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: function returns zero on success
 */
int main(void)
{
	float cel, fah;
	int step, lower, upper;

	step = 20;
	lower = 0;
	upper = 300;
	fah = lower;

	printf("Fahrenheit\tCelsius");
	printf("\n_____________");
	while (fah <= upper)
	{
	cel = 5.0 / 9.0 * (fah - 32.0);
	printf("\n% 3.0f % 6.2f\n", fah, cel);
	fah = fah + step;
	}
	return (0);
}
