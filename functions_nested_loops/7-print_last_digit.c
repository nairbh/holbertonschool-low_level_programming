#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @r: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
	{
		r = r * (-1);

		_putchar(r + '0');
		return (r);
	}

	_putchar(r + '0');

	return (r);
}
