#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success print 1
 * On Error, -1 is returned and erro no is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
