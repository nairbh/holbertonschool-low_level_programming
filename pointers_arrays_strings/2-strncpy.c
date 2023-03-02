#include "main.h"
#include <string.h>
#include <stdlib.h>

char *_strncpy(char *dest, const char *src, int n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++) 
    {
        dest[i] = src[i];
    }
    for (i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

