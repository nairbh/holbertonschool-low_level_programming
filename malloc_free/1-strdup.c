#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
extern size_t strnlen(const char *__string, size_t __maxlen);
char *_strdup(char *str)

{
	size_t len;
	char *new_str;

	if (str == NULL)

		return (NULL);

	len = strlen(str + 1);

	new_str = malloc(len + 2);

	if (new_str == NULL)

		return (NULL);


	memcpy(new_str, str, len + 1);

	return (new_str);
}
