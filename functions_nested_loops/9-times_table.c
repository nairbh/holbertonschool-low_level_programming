#include <stdio.h>
#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0
*
*Return: empty output
*/

void times_table(void)
{int x, y, z;
for (x = 0; x <= 9; x++)
{
	for (y = 0; y <= 9; y++)
{z = x * y;
if (y)
{putchar(',');
putchar(' ');
}
if (z < 10 && y)
putchar(' ');
if (z >= 10)
putchar(z / 10 + '0');
putchar(z % 10 + '0');
}
putchar('\n');
}
}
