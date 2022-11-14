#include <stdio.h>

typedef struct student
{
	char name[20];
	int age;

}stud;

int main(void)
{
	stud s1;
	printf("Enter the details of student s1:");
	printf("\nEnter student name:");
	scanf("%s", &s1.name);
	printf("\nEnter the age of the student");
	scanf("%d", &s1.age);
	printf("\n Name of the student is: %s", s1.name);
	printf("\n Age of the student is: %d", s1.age);
	return (0);
}
