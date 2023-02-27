#include <stdio.h>
#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{	
		i += 2;
		_putchar(str[i]);
	}

	_putchar('\n');
}
