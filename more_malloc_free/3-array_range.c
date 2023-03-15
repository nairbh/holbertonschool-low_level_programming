#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
