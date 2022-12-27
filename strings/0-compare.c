#include <stdio.h>
#include "main.h"
#include <stdlib.h>
bool compare(char *str1, char *str2);
/**
* main - demonstrates strings comparions
*
* Return: 0 Always
*/
int main(void)
{
	char *string1;
	char *string2;

	string1 = (char *)malloc(sizeof(string1));
	string2 = (char *)malloc(sizeof(string2));
	printf("Please enter a string ");
	/*Read input from the user*/
	fgets(string1, sizeof(string1), stdin);
	printf("Please enter the same exact string ");
	/*Read input from the user*/
	fgets(string2, sizeof(string1), stdin);
	/*Display strings*/
	puts(string1);
	puts(string2);
	if (compare(string1, string2))
		printf("Same\n");
	else
		printf("Different\n");
	free(string1);
	free(string2);

	return (0);
}
/**
* compare - compares two strings
* @str1: pointer to parameter 1
* @str2: pointer to parameter 2
* Return: True is the same, false if different
*/
bool compare(char *str1, char *str2)
{
	/*comparing two strings compares*/
	/*two addresses which will always be different*/
	if (str1 == str2)
		return (true);
	else
		return (false);
}
