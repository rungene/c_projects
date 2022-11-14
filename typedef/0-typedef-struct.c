#include <string.h>
#include <stdio.h>

typedef struct myStructure
{
	int myNum;
	char myChar;
	char myString[30];
} myStruct;

int main(void)
{
	myStruct m1 = {23, 'C', "How are you"};
	myStruct m2;
	printf("Original values: %d %c %s\n", m1.myNum,
			m1.myChar, m1.myString);
	
	m1.myNum = 24;
	m1.myChar = 'B';
	strcpy(m1.myString, "I am well thanks");


	printf("After values: %d %c %s\n", m1.myNum,
			m1.myChar, m1.myString);
	m2 = m1;
	m2.myNum = 30;
	m2.myChar = 'A';
	strcpy(m2.myString, "Inside 2");
	printf("%d, %c, %s\n", m2.myNum, m2.myChar, m2.myString);
	return (0);
}
