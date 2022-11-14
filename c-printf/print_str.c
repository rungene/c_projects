#include "main.h"

void print_str( void (*cb)(void))
{
	cb();
}

void callBack(void)
{
	printf("Rick and Morty is awesome");
}

int main(void)
{
	void (*ptr_function) (void) = &callback;

	print_str(ptr_function);

	return (0);
}
