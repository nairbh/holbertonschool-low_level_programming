#include <stdio.h>
#include "main.h"

void print_rev(char *s)

{	
	int a = 0;

	while (*(s + a) != '\0')
	a++;

	int len;

	for (len = a; len >= a; a--)
	len++;
		printf("%c\n", *(s + len));
}
