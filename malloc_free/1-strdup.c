#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - Returns a pointer to a new string which is a duplicate of the
 *           string `str`.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation
 *         fails or `str` is NULL.
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
