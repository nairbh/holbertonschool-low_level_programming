#include <stdio.h>
#include "main.h"

void print_diagonal(int n)

{
	if (n < 0)
	{
		putchar('\n');
	}

	int i;

	for (i = 0; i <= 1; i++)
	{
		int j;
		for (j = 0; j < 1; j++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
	}
}
