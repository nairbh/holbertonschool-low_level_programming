#include <stdio.h>
#include "main.h"

void print_diagonal(int n)

{
	int i;
	if (n <= 0)
	{
		putchar('\n');
	}

	for (i = 1; i <= n; i++)
	{
		int j;
		for (j = 1; j < i; j++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
	}
}
