#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
