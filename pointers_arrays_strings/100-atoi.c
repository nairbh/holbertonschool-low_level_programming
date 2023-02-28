#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

int _atoi(char *s) {
    int sign = 1, num = 0;

    while (*s && (*s < '0' || *s > '9')) {
        if (*s++ == '-') {
            sign = -1;
        }
    }

    while (*s >= '0' && *s <= '9') {
        num = num * 10 + (*s++ - '0');
    }

    return num * sign;
}
