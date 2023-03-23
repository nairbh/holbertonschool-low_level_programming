#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;	/* A variable argument list */
	int sum = 0;		/* The running total */
	unsigned int i;		/* A counter for the for loop */

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);	/* Initialize the variable argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);	/* Add each argument to the running total */
	}


	va_end(arguments);	/* Clean up the variable argument list */

	return (sum);
}
