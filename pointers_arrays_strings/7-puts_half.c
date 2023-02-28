#include "main.h"
#include <string.h>
#include <stdio.h>

void puts_half(char *str)
{
    int len = 0;
    char *p = str;

    while (*p != '\0') {
        len++;
        p++;
    }

    int mid = len / 2;
    if (len % 2 != 0) {
        mid++;
    }

    for (int i = mid; i < len; i++) {
        putchar(*(str + i));
    }

    putchar('\n');
}

