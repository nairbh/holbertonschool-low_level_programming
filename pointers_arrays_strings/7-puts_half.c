#include <stdio.h>
#include "main.h"
#include <string.h>

void puts_half(char *str) 

{
    int length = strlen(str);
    int half;
	int n;
    if (length % 2 == 0) {
        half = length / 2;
    } else {
        half = (length - 1) / 2;
    }

    for (n = half; n < length; n++) {
        printf("%c", str[n]);
    }
    putchar('\n');
}

