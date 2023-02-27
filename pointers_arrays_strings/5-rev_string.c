#include <stdio.h>
#include "main.h"
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	int i;

	for(i = 0; i < len/2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - i -1];

		s[len -i -1] = tmp;
	}
}
