#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count_2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count_2 < n)
	{
		*(dest + count) = *(src + count_2);

		if (*(src + count_2) == '\0')

			break;
		count++;
		count_2++;
	}
	return (dest);
}
