#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
	int a = 0;

	while (s [a] != '\0')
	a++;

	{
		printf("%c", s [a]);
	}

	printf("\n");
}

