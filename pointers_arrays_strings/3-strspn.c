#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;


	for (i = 0; s[i] && strchr(accept, s[i]); i++;)

		return (i);
	



