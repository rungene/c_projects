#include <stdio.h>
void printHello(char *name)
{
	printf("Hello %s\n", name);
}
int main(void)
{
	
	void (*ptr)(char*);
	ptr = printHello;
	ptr("Tom");
	
}
