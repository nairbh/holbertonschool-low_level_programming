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
	int i = 1;
	if (n >= 0)
	{
	_putchar('+');
	_putchar(i);
	}

	else if (n == 0)
	{ 
	i = 0;
	_putchar(n);

	}
	else {
		_putchar('-');
	
	return (i);
	}
	
}
