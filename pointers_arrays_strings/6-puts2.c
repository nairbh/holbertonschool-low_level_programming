#include <stdio.h>
#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{	
		i += 2;
		_puchar(str[i]);
	}

	_putchar('\n');
}
