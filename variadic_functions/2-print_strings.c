#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list arguments;

	va_start(arguments, n);

		for (i = 0; i < n; i++)
		{
			ptr = va_arg(arguments, char*);

			if (ptr == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", ptr);
			}
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
	va_end(arguments);
	printf("\n");
}

