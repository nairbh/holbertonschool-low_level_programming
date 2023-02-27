#include <stdio.h>
#include "main.h"
#include <string.h>
void puts_half(char *str)

{
	int loong;

	int half;

	int i;
	loong = strlen(str);

	if (loong % 2 == 0)
{
	{
		half = loong / 2;
	}

	else 
		{
			half = loong -1 / 2;
		}
}

	for (i = half; i < loong; i++)
	{
		printf("%c",str[i]);
	}

	putchar('\n');
}
