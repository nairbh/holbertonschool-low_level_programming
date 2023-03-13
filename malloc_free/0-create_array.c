#include <stdio.h>
#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned i;

	if (size == NULL)

	{
		return (NULL);
	}

	*array = malloc(size * sizeof(char));


	if (array == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

	{
		array[i] = c;
	}

	return (array);

}

