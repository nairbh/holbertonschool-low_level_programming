#include <stdio.h>
#include "main.h"

char *_strcpy(char *dest, char *src)

{	char *p = src;

	int len;

	while (*p != '\0')

	{
		len++;
		p++;
	}

	dest = len;

	return dest;
}
