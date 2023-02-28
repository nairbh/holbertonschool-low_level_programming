#include <stdio.h>
#include "main.h"

void print_array(int *a, int n)
{
	int i;

	for (i= 0; i < n)

	{
		printf("%d", a[n]);
	}
	if (i < n -1)
	{
		putchar(',');
	}

	putchar('\n');
}
