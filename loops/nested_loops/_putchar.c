#include <unistd.h>

/**
 *_putchar - writes character c to stdout
 *@c: The character to print
 *
 * Return: On success returns 1
 * on error, -1 is returned, the error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
