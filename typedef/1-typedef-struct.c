#include <stdio.h>
#include <string.h>

typedef struct myCarStruct
{
	char brand[50];
	char model[50];
	int yom;
	char color[50];
} carStruct;

int main(void)
{
	carStruct car1 = {"BMW", "X5", 1999, "Whites"};
	carStruct car2 = {"Ford", "Mustuang", 1969, "Blue"};
	carStruct car3 = {"Toyota", "Corolla", 2011, "Beig"};

	printf(" Car 1: %s, %s, %d, %s\n", car1.brand, car1.model, car1.yom, car1.color);
	printf(" Car 2: %s, %s, %d, %s\n", car2.brand, car2.model, car2.yom, car2.color);
	printf(" Car 3: %s, %s, %d, %s\n", car3.brand, car3.model, car3.yom, car3.color);

	      return (0);
}
