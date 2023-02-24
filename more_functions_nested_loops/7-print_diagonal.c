#include <stdio.h>
#include "main.h"

void print_diagonal(int n)

{
	if (n < 0)
	{
		putchar('\n');
	}

	int i;

	for (i = 1; i <= n; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
	}
}
