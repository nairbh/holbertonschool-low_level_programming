#include <stdio.h>
#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);

		i += 2;
	}
}
