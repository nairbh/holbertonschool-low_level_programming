#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = tmp;
	}
}
