#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list print;
	unsigned int i = 0, j, c = 0;
	char *s;
	const char t_arg[] = "cifs";

	va_start(print, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(print, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(print, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(print, double)), c = 1;
			break;
		case 's':
			s = va_arg(print, char *), c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(print);
}
