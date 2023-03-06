#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)

{
	for (*s != '\0')

	{
		putchar(*s);

		_puts_recursion(s + 1);
	}

	else {
		putchar('\n');
	}

}
