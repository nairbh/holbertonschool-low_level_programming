#include <string.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)

{

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')

	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;

		}


		if (*n == '\0')

		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
