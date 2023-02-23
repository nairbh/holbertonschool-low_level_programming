#include <stdio.h>
#include "main.h"


void more_numbers(void)

{
	for (int i = 0; i <= 10; i++)
	{
		for (int a = 0; a <= 14; a++)
		{
			if ( a > 9)
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar('\n');
		}
	}
}
