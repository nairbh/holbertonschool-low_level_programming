#include "main.h"
#include <string.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
