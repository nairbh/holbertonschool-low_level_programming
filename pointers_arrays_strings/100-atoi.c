#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: integer to be convert
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
