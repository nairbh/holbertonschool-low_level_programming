#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c, ", va_arg(args, int));
		}

			else if (format[i] == 'i')
		{
			printf("%d, ", va_arg(args, int));
		}
			else if (format[i] == 'f')
		{
			printf("%f, ", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);

		if (s == NULL)

		{
			printf("(nil)");
		}
			else
		{
			printf("%s", s);
		}
		}
	i++;
	}
	printf("\n");
	va_end(args);
}
