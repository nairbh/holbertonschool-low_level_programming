#include <stdio.h>
#include "main.h"

void puts2(char *str)
{
	int i;

	while (i = 0; str[i] != '\0')
	{
		printf("%c", str[i]);

		i += 2;
	}

	printf("\n");
}
