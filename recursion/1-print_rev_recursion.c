#include <stdio.h>
#include "main.h"

void _print_rev_recursion(char *s)

{
	for (*s == '\0')
	{
		return;
	}


_print_rev_recursion(s + 1);

	putchar(*s);
}
