#include <stdio.h>
#include "main.h"
#include <string.h>
char *_strcpy(char *dest, char *src)

{
	
	size_t len = strlen(src);
    
	strncpy(dest, src, len + 1);

	return dest;
}

