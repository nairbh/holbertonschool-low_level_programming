#include <stdio.h>
#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	i++;

		printf("%s", str[i]);

		i += 2;

	printf("\n");
}
