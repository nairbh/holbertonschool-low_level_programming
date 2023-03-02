#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;


	for (count = 0; s[count] && strspn(accept, s[count], count++)

		return (count);



}



