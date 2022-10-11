#include "main.h"
#include <string.h>
/**
 * int _strlen Write a function that returns the length of a string.
 *
 *@string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*(s + count) != '\0')


	count++;

	return (count);
}
