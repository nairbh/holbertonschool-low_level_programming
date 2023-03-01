#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* puts_half - function that prints half of string
* @str: string
*/
void puts_half(char *str)
{
	int len = 0;
	char *p = str;
	int i;
	int mid;

	while (*p != '\0')

{
		len++;
		p++;
}

		mid = len / 2;

		if (len % 2 != 0)
		{
			mid++;
		}
	for (i = mid; i < len; i++)
	{
		putchar(*(str + i));
	}

	putchar('\n');
}

