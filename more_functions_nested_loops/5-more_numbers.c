#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 */

void more_numbers(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		int a;

		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				{
				putchar(a / 10 + '0');
				}
			putchar(a % 10 + '0');
		}
		putchar('\n');
	}
}

