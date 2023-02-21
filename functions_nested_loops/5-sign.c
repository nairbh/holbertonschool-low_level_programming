#include "main.h"
/**
* print_sign - main function
*
* @n: character to compare
*
* Return: 1 if positive, 0 if zero, -1 if negative
*
*/
int print_sign(int n)

{
	if (n >= 0)
	{  int i = 1;
		_putchar('+');
	  _putchar(i);
	}

	if (n == 0)
	{  int i = 0;
		_putchar('0');
		_putchar(i);
	}

	if (n < 0)
	{
	return (-1);
	}
}
