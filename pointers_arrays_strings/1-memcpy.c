#include <stdio.h>
#include "main.h"


char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		strncpy(dest, src, i);
	}

	return (dest);
}

