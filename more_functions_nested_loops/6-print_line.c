#include <stdio.h>
#include "main.h"

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}

	else
	{
		int j;

		for (j = 0; j < n; j++)
		{
			putchar('_');
		}
			putchar('\n');

	}
}
