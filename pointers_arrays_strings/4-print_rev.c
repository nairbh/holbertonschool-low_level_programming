#include <stdio.h>
#include "main.h"

void print_rev(char *s)

{	
	int a = 0;

	while (*(s + a) != '\0')

		a++;
	printf("%s\n", strrev(str));
}
