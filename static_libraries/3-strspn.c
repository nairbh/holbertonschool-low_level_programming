#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')

	{	j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
					j++;
		}

		if (accept[j] == '\0')
		{

			break;
		}
			i++;
	}
	return (i);
}
