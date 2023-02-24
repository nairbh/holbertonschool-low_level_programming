#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Write a function that checks for uppercase character.
 * @c: number
 * Return: Alway 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);
	else
		return (0);

}
