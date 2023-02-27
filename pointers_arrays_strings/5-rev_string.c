#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	a++;

	{
		int j;

		for (a = j -1; j >= 0; j--)

			printf("%c", *(s + j));
	}

	printf("\n");
}

