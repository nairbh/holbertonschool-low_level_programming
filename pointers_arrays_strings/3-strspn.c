#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;


	for (s[i] && strchr(accept, s[i]););
	{
		i++;

		return (i);
	}

}

