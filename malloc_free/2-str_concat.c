#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 *
 * Return: pointer to a newly allocated space in memory containing
 * the concatenated string, or NULL if it fails.
 *
 *
 strnlen - Calculate the length of a string, but not more than a given
maximum length.
@str: The string to measure.
@maxlen: The maximum number of characters to examine.
Return: The number of characters in the string, not counting the null
terminator. If @maxlen is reached, the function stops counting and
returns @maxlen.
*/
extern size_t strnlen(const char *__string, size_t __maxlen);
char *str_concat(char *s1, char *s2)

{
	size_t len1 = s1 ? strlen(s1) : 0;
	size_t len2 = s2 ? strlen(s2) : 0;

	char *result = malloc(len1 + len2 + 1);

	if (!result)

	{
		return (NULL);
	}

	if (s1)
	{
		memcpy(result, s1, len1);
	}

	if (s2)
	{
		memcpy(result + len1, s2, len2 + 1);
	}

	result[len1 + len2] = '\0';

	return (result);
}
