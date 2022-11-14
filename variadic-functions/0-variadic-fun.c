/* include the stdarg.h
   int fixedparam, ...
   define a va_list variable
   begin and end the arg list with va_start and va_end
   Add(3, 1, 2, 4) = 6
   Add(6, 20, 20, 20, 10, 10, 20) = 100
 */
#include <stdarg.h>
#include <stdio.h>

int add(int args, ...)
{
	va_list ap;
	int i = 0, sum = 0;
	
	va_start(ap, args); /* Initialize the argument list. */

	for (i = 0; i < args; i++)
		sum += va_arg(ap, int); /*Get the next argument value */
	va_end(ap); /*clean up */
	return sum;
}

int main(void)
{
	printf("Add 1 = %d\n", add(3, 1, 2, 4));
	printf("Add 2 = %d\n", add(6, 20, 20, 20, 10, 10, 20));
	return (0);
}

