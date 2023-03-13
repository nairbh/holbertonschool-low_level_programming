#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
extern size_t strnlen(const char *__string, size_t __maxlen);
char *str_concat(char *s1, char *s2)

{
	
	char *result;
	size_t len1 =  strlen(s1);

	size_t len2 = strlen(s2);
	
	if (s1 == NULL)
		 {
			 return (NULL);
		 }
	if (s2 == NULL)
	{
		return (NULL);
	}

	result = malloc((len1 + len2 + 1) * sizeof(char));	
	if (!result)
	{
		return (NULL);
	}

	memcpy(result, s1, len1 + 2);
	memcpy(result + len1, s2, len2 + 2);

	return (result);
}
