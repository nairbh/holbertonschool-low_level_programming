#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	char *p_dest = dest;

	const char *p_src = src;

	for (i = 0; i < n; i++)

	{
		p_dest[i] = p_src[i];
	}

	return (dest);
}
