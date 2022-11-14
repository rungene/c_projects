#include <stdio.h>

int main(void){

	char x,y,z;
	int age;

	printf("Entre your initials followed by your age: ");
	scanf("%c %c %c %d", &x, &y, &z, &age);

	printf("My initials: %c%c%c while my age is : %d. \n",x,y,z, age);

		return(0);
}
