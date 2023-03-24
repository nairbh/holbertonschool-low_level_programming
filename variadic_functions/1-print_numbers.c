#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{	unsigned int i;
	int entier;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		entier = va_arg(ptr, int);

		printf("%d", entier);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ptr);
	printf("\n");
}
