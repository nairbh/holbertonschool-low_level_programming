#include <stdio.h>
#include "main.h"
#include <string.h>
void puts_half(char *str)
{
    int len = strlen(str);
    int half = len / 2;
    int i;

    for (i = half; i <= len; i++)
    {
        putchar(str[i]);
    }

    putchar('\n');
}
